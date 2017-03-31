#include <iostream>
#include "Pedido.h"

using namespace std;

    void Pedido::setNumero(int n) {
        numero = n;
    }

     void Pedido::setQuantidade(int q) {
        quantidade = q;
    }
     void Pedido::setPreco(double p) {
        preco =  p;
    }

     void Pedido::setDescricao(string d) {
        descricao = d;
    }

    int Pedido::getNumero() {
        return numero;
    }

    int Pedido::getQuantidade() {
        return quantidade;
    }

    double Pedido::getPreco() {
        return preco;
    }
    string Pedido::getDescricao() {
        return descricao;
    }

    double Pedido::getPrecoTotal(){
        double precoTotal;
        precoTotal = getPreco() * getQuantidade();
        return precoTotal;
    }

    void Pedido::zeraPedidos(){

        setNumero(0);
        setQuantidade(0);
        setPreco(0.0);
        setDescricao("Nada");
    }

