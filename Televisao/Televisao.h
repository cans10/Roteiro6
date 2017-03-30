#ifndef TELEVISAO_H_INCLUDED
#define TELEVISAO_H_INCLUDED

using namespace std;

class Televisao {

private:
    int canal = 0;
    int volume = 0;

public:

    void setCanal(int c);
    void setVolume(int v);
    int getCanal();
    int getVolume();

    void aumentarVolume();
    void diminuirVolume();
    void definirVolume(int v);
    void aumentarCanal();
    void diminuirCanal();
    void definirCanal(int c);

};


#endif // TELEVISAO_H_INCLUDED
