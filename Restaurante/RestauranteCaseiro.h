#ifndef RESTAURANTECASEIRO_H_INCLUDED
#define RESTAURANTECASEIRO_H_INCLUDED
#include <iostream>
#include <string>
#include <vector>
#include "MesaDeRestaurante.h"

using namespace std;

class RestauranteCaseiro {

private:
    vector <MesaDeRestaurante> mesas;

public:
    void adicionaPedido(int m, int n, int q, double p, string d);
    double calculaTotalMesa(int m);
    double calculaTotalRestaurante();
};

#endif // RESTAURANTECASEIRO_H_INCLUDED
