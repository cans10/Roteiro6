#include <iostream>
#include "Relogio.h"
using namespace std;

int main(){

    Relogio r1;
    r1.setHorario(01, 02, -6);

    cout.precision(2);
    cout << fixed << "Horario antes: " << r1.getHora() << ":"<< r1.getMinuto() << ":" << r1.getSegundo() << endl;

    r1.setAvancarHorario();

    cout << fixed << "Horario depois: " << r1.getHora() << ":"<< r1.getMinuto() << ":" << r1.getSegundo() << endl;

    return 0;
}
