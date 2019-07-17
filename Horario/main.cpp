#include <iostream>
#include "Horario.h"

using namespace std;

int main(){
    Horario* h1 = new Horario();
    Horario* h2 = new Horario();
    Horario* h3 = new Horario();

    h1->setHora(5);
    h1->setMinuto(2);
    h1->setSegundo(6);

    //atributos invalidos
    h2->setHora(-1);
    h2->setMinuto(-1);
    h2->setSegundo(-1);

    h3->setHora(0);
    h3->setMinuto(0);
    h3->setSegundo(59);

    cout << "h1: " << endl << h1->getHora() << ":" << h1->getMinuto() << ":" << h1->getSegundo() << endl << endl;
    cout << "h2: " << endl << h2->getHora() << ":" << h2->getMinuto() << ":" << h2->getSegundo() << endl << endl;

    for(int i = 0; i < 63; i ++){
        h3->avancarHorario();
        cout << "h3: " << endl << h3->getHora() << ":" << h3->getMinuto() << ":" << h3->getSegundo() << endl;
    }


    return 0;
}
