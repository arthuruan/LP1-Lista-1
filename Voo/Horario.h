#ifndef HORARIO_H
#define HORARIO_H
#include <iostream>

using namespace std;


class Horario{
    public:
        Horario();
        Horario(int h, int m, int s);

        int getHora();
        int getMinuto();
        int getSegundo();

        void setHora(int h);
        void setMinuto(int m);
        void setSegundo(int s);
        void setHorario(int h, int m, int s);
        void avancarHorario();

    private:
        int hora;
        int minuto;
        int segundo;
};

#endif // HORARIO_H
