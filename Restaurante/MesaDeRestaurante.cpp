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

    double MesaDeRestaurante::calculaTotal(){
        double total = 0.0;
             for(int i = 0; i < pedidos.size(); i++){
                   total += pedidos[i].getPrecoTotal();
             }

        return total;
    }
/*
     void MesaDeRestaurante::zeraPedidos(){
        pedidos.clear();
    }

*/
