#ifndef PEDIDO_H_INCLUDED
#define PEDIDO_H_INCLUDED
#include <iostream>
#include <string>

using namespace std;

class Pedido {

    private:
        int numero;
        int quantidade;
        double preco;
        string descricao;

    public:
        void setNumero(int n);
        void setQuantidade (int q);
        void setPreco(double p);
        void setDescricao(string d);

        int getNumero();
        int getQuantidade();
        double getPreco();
        string getDescricao();
        double getPrecoTotal();
        void zeraPedidos();


};
#endif // PEDIDO_H_INCLUDED
