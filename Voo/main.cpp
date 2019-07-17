#include "Voo.h"
#include "Data.h"
#include "Horario.h"
#include <iostream>

using namespace std;

int main(){
    Voo* v1 = new Voo();

    v1->ocupa(0);
    v1->ocupa(1);

    if(v1->ocupa(2)){
        cout << "Cadeira ocupada com sucesso.\n";
    }else{
        cout << "Cadeira nao ocupada.\n";
    }

    cout << "Proxima cadeira livre, numero : " << v1->proximoLivre() << endl;
    cout << "Resta um total de " << v1->vagas() << " vagas\n" << endl;

    for(int i = 0; i < 5; i++){
        if(v1->verifica(i)){
            cout << "Cadeira numero " << i << " livre.\n";
        }else{
            cout << "Cadeira numero " << i << " ocupada.\n";
        }
    }

    cout << "Numero do voo: " << v1->getNumero() << endl;
    cout << "\nData: " << v1->getDat().getDia() << " de , " << v1->getDat().getMesExtenso() << ", de " << v1->getDat().getAno() << endl;
    cout << "\nHorario: " << v1->getHor().getHora() << ":" << v1->getHor().getMinuto() << ":" << v1->getHor().getSegundo() << endl;

    return 0;
}
