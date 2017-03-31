#include <iostream>
#include "MesaDeRestaurante.h"

using namespace std;

     void MesaDeRestaurante::setMesa(int m){
         mesa = m;
    }

     int MesaDeRestaurante::getMesa(){
        return mesa;
    }

     void MesaDeRestaurante::setPedidos(Pedido p){
         ped = p;
    }

     Pedido MesaDeRestaurante::getPedidos(){
        return ped;
    }
    void MesaDeRestaurante::adicionaPedido(int n, int q, double p, string d) {
        ped.setNumero(n);
        ped.setQuantidade(q);
        ped.setPreco(p);
        ped.setDescricao(d);
        pedidos.push_back(ped);
    }

    double MesaDeRestaurante::calculaTotal(){
        double total = 0.0;
             for(int i = 0; i < pedidos.size(); i++){
                total += pedidos[i].getPrecoTotal();
             }
        return total;
    }

     void MesaDeRestaurante::zeraPedidos(){
        pedidos.clear();
    }

    void MesaDeRestaurante::zeraPedidosDeMesa(Pedido p){
        for(int i = 0; i < pedidos.size(); i++){
            if(pedidos[i].getNumero() == p.getNumero()){
                    p.zeraPedidos();
            }
        }
    }



