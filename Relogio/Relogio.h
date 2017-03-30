#ifndef RELOGIO_H_INCLUDED
#define RELOGIO_H_INCLUDED
#include <iostream>
using namespace std;

class Relogio {

private:
    int hora, minuto, segundo;

public:
    void setHora(int h);
    void setMinuto (int m);
    void setSegundo(int s);

    void setHorario(int h, int m, int s);
    void setAvancarHorario();

    int getHora();
    int getMinuto();
    int getSegundo();

};

#endif // RELOGIO_H_INCLUDED
