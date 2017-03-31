#ifndef MESADERESTAURANTE_H_INCLUDED
#define MESADERESTAURANTE_H_INCLUDED
#include <iostream>
#include <string>
#include <vector>
#include "Pedido.h"

using namespace std;

class MesaDeRestaurante {

    private:
        int mesa;
        Pedido ped;
        vector <Pedido> pedidos;

    public:
        void setMesa(int n);
        void setPedidos(Pedido p);
        int getMesa();
        Pedido getPedidos();

        void adicionaPedido(int n, int q, double p, string d);
        double calculaTotal();
        void zeraPedidos();
        void zeraPedidosDeMesa(Pedido p);

};

#endif // MESADERESTAURANTE_H_INCLUDED
