#include <iostream>
#include "Relogio.h"
using namespace std;

    int controle;

    void Relogio::setHora(int h) {
        hora = h;
    }
    void Relogio::setMinuto (int m){
        minuto = m;
    }
    void Relogio::setSegundo(int s){
        segundo = s;
    }

    void Relogio::setHorario(int h, int m, int s){
        if((h >= 0)&&(h < 60)&&(m >= 0)&&(m < 60)&&(s >= 0)&&(s < 60)){
            controle = 1;
            setHora(h);
            setMinuto(m);
            setSegundo(s);
        } else {
            cout << "Horario errado" << endl;
            controle = 0;
            setHora(0);
            setMinuto(0);
            setSegundo(0);
        }
    }
    void Relogio::setAvancarHorario(){
        if(controle == 1){
            if(getSegundo() < 59){
                setSegundo(getSegundo() + 1);
            } else {
                setSegundo(0);
                if(getMinuto() < 59){
                    setMinuto(getMinuto() + 1);
                } else {
                    setMinuto(0);
                    if(getHora() < 23){
                        setHora(getHora() + 1);
                    } else {
                        setHora(0);
                    }
                }
            }
        }
    }

    int Relogio::getHora(){
        return hora;
    }
    int Relogio::getMinuto(){
        return minuto;
    }
    int Relogio::getSegundo(){
        return segundo;
    }


