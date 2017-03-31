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
        vector <Pedido> pedidos;

    public:
        void setMesa(int n);
        int getMesa();

        void adicionaPedido(int n, int q, double p, string d);
        void zeraPedidos();
        double calculaTotal();

};

#endif // MESADERESTAURANTE_H_INCLUDED
