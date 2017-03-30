#include <iostream>
#include "Televisao.h"

using namespace std;

     void Televisao::setCanal(int c){
         if(c < 0){
            canal == 0;
         } else if(c > 100){
            canal = 100;
         } else {
            canal = c;
         }
    }

    int Televisao::getCanal(){
        return canal;
    }

    void Televisao::definirCanal(int c){
        Televisao::setCanal(c);
    }

    void Televisao::diminuirCanal(){
        Televisao::setCanal(Televisao::getCanal()-1);
    }

    void Televisao::aumentarCanal(){
        Televisao::setCanal(Televisao::getCanal()+1);
    }

    void Televisao::setVolume(int v){
         if(v < 0){
            volume == 0;
         } else if(v > 100){
            volume = 100;
         } else {
            volume = v;
         }
    }

    int Televisao::getVolume(){
        return volume;
    }

     void Televisao::definirVolume(int v){
        Televisao::setVolume(v);
    }

    void Televisao::diminuirVolume(){
        Televisao::setVolume(Televisao::getVolume()-1);
    }

    void Televisao::aumentarVolume(){
        Televisao::setVolume(Televisao::getVolume()+1);
    }
