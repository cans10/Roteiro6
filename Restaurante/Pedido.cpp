#include <iostream>
#include "Pedido.h"

using namespace std;

    Pedido::Pedido(int n, int q, double p, string d){
        setNumero(n);
        setQuantidade(q);
        setPreco(p);
        setDescricao(d);
        }
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
