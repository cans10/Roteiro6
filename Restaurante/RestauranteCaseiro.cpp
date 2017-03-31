#include <iostream>
#include "RestauranteCaseiro.h"
#include "Pedido.h"


using namespace std;

    void RestauranteCaseiro::adicionaPedido(int m, int n, int q, double p, string d) {
        MesaDeRestaurante mesa;
        mesa.setMesa(m);
        mesa.adicionaPedido(n, q, p, d);
        mesas.push_back(mesa);
    }

    double RestauranteCaseiro::calculaTotalMesa(int m){
        double total = 0.0;
        for(int i = 0; i < mesas.size(); i++){
            if(mesas[i].getMesa() == m){
                total += mesas[i].calculaTotal();
            }
        }
        return  total;
    }

    double RestauranteCaseiro::calculaTotalRestaurante(){
        double total;
        for(int i = 0; i < mesas.size(); i++){
              total += calculaTotalMesa(i+1);
           }
        return total;
    }

     void RestauranteCaseiro::zeraTodasAsMesas(){
        mesas[0].zeraPedidos();
        mesas.clear();
     }

    void RestauranteCaseiro::zeraMesa(int m){
        for(int i = 0; i < mesas.size(); i++){
            if(mesas[i].getMesa() == m){
                Pedido p = mesas[i].getPedidos();
                mesas[i].zeraPedidosDeMesa(p);
                mesas[i].setMesa(0);
            }
        }
    }
