#include <iostream>
#include "MesaDeRestaurante.h"

using namespace std;

     void MesaDeRestaurante::setMesa(int m){
         mesa = m;
    }

     int MesaDeRestaurante::getMesa(){
        return mesa;
    }

    void MesaDeRestaurante::adicionaPedido(int n, int q, double p, string d) {
        Pedido ped (n, q, p, d);
        pedidos.push_back(ped);
    }

    void MesaDeRestaurante::zeraPedidos(){

    }

    double MesaDeRestaurante::calculaTotal(int n){
        double total;
             for(int i = 0; i < pedidos.size; i++){
                    if(pedidos[i] = m){
                    total = pedidos[i].getPreco();
                }
            }

        return total;
    }

