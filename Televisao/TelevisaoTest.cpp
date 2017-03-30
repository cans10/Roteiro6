#include <iostream>
#include "Televisao.h"

using namespace std;

int main()
{

    Televisao tv;

    cout << "Dados da TV: Canal: " << tv.getCanal() << " - Volume: "<< tv.getVolume()<< endl;

    tv.definirCanal(10);
    tv.definirVolume(15);

    cout << "Dados da TV: Canal: " << tv.getCanal() << " - Volume: "<< tv.getVolume()<< endl;

    tv.aumentarCanal();
    tv.diminuirVolume();

    cout << "Dados da TV: Canal: " << tv.getCanal() << " - Volume: "<< tv.getVolume()<< endl;

    tv.diminuirCanal();
    tv.diminuirCanal();
    tv.aumentarVolume();
    tv.aumentarVolume();

    cout << "Dados da TV: Canal: " << tv.getCanal() << " - Volume: "<< tv.getVolume()<< endl;

    return 0;
}
