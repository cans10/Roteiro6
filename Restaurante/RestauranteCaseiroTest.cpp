#include <iostream>
#include "RestauranteCaseiro.h"


using namespace std;

int main()
{
    RestauranteCaseiro rc;
    double totalMesa = 0;
    double totalRestaurante = 0;

    rc.adicionaPedido(1, 1, 1, 20.12, "carne");
    rc.adicionaPedido(1, 2, 1, 10.80, "feijao");
    rc.adicionaPedido(2, 3, 2, 30.00, "peixe");
    rc.adicionaPedido(10, 4, 2, 5.00, "tapioca");

    //rc.zeraTodasAsMesas();
    //rc.zeraMesa(1);

    totalMesa = rc.calculaTotalMesa(1);
    cout.precision(2);
    cout << fixed << "Total Mesa: R$ " << totalMesa << endl;

    totalMesa = rc.calculaTotalMesa(2);
    cout << fixed << "Total Mesa: R$ " << totalMesa << endl;

    totalMesa = rc.calculaTotalMesa(10);
    cout << fixed << "Total Mesa: R$ " << totalMesa << endl;

    totalRestaurante = rc.calculaTotalRestaurante();
    cout << "Total Restaurante: R$ " << totalRestaurante << endl;

    return 0;
}
