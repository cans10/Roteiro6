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
        preco = p;
    }

     void Pedido::setDescricao(string d) {
        descricao = d;
    }

    void Pedido::getNumero() {
        return numero;
    }

    void Pedido::getQuantidade() {
        return quantidade;
    }
    void Pedido::getPreco() {
        return preco;
    }
    void Pedido::getDescricao() {
        return descricao;
    }
