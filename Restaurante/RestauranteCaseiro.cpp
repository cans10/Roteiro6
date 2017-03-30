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
        MesaDeRestaurante mesa;
        for(int i = 0; i < mesas.size; i++){
            if(mesas[i] = m){
                mesa = mesas[i];
                total += mesa.calculaTotal(mesa.)

            }
    }

    double RestauranteCaseiro::calculaTotal(){
        double total;

        for(int i = 0; i < mesa.size; i++){
           for(int j = 0; j < m.pedido.size; j++){
              total += mesa.getMesa.getPreco;
           }
        }
        return total;
    }
