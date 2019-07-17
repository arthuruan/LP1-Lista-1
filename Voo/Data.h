#ifndef DATA_H
#define DATA_H
#include <iostream>

using namespace std;

class Data{
    public:
        Data();
        Data(int d, int m, int a);

        int getDia();
        int getMes();
        int getAno();
        string getMesExtenso();
        bool isBissexto();
        int Compara(Data objeto);

        void setDia(int d);
        void setMes(int m);
        void setAno(int a);

    private:
        int dia, mes, ano;

};

#endif // DATA_H
