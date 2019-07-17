#ifndef VOO_H
#define VOO_H
#include "Data.h"
#include "Horario.h"

using namespace std;

class Voo{
    public:
        Voo();
        Voo(int n, Data d, Horario h, bool v[100]);
        int proximoLivre();
        bool verifica(int cadeira);
        bool ocupa(int cadeira);
        int vagas();
        int getNumero();
        Data getDat();
        Horario getHor();

    private:
        int numero;
        Data dat;
        Horario hor;
        bool vagasV[100];
};

#endif // VOO_H
