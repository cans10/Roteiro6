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
    rc.adicionaPedido(3, 4, 2, 5.00, "tapioca");

    cout.precision(2);

    totalMesa = rc.calculaTotalMesa(1);
    cout << fixed << "Total Mesa 1:  R$  " << totalMesa << endl;

    totalMesa = rc.calculaTotalMesa(2);
    cout << fixed << "Total Mesa 2:  R$  " << totalMesa << endl;

    totalMesa = rc.calculaTotalMesa(3);
    cout << fixed << "Total Mesa 3:  R$  " << totalMesa << endl;

    totalRestaurante = rc.calculaTotalRestaurante();
    cout << "Total Restaur:  R$ " << totalRestaurante << endl;


    cout << "\nZERANDO AS MESAS\n" << endl;

    rc.zeraTodasAsMesas();
    //rc.zeraMesa(3);

    cout << "-----------------------------------\n" << endl;

    totalMesa = rc.calculaTotalMesa(1);
    cout << fixed << "Total Mesa 1:  R$  " << totalMesa << endl;

    totalMesa = rc.calculaTotalMesa(2);
    cout << fixed << "Total Mesa 2:  R$  " << totalMesa << endl;

    totalMesa = rc.calculaTotalMesa(3);
    cout << fixed << "Total Mesa 3:  R$  " << totalMesa << endl;

    totalRestaurante = rc.calculaTotalRestaurante();
    cout << "Total Restaur:  R$ " << totalRestaurante << endl;

    return 0;
}
