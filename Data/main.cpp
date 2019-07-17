#include <iostream>
#include "Data.h"

using namespace std;

int main(){
    int n, n2;
    Data* d1 = new Data();
    Data* d2 = new Data(1, 12 , 2019);
    Data* d3 = new Data(2, 5, 2000);

    d1->setDia(1);
    d1->setMes(11);
    d1->setAno(2019);

    cout << "Data 1:" << endl << d1->getDia() << "/" << d1->getMesExtenso() << "/" << d1->getAno() << endl;

    n = d2->Compara(*d1);

    if(n == 0){
        cout << "Datas iguais\n";
    }else if(n == 1){
        cout << "Data corrrente maior que a do parametro\n";
    }else if(n == -1){
        cout << "Data do parametro maior que a corrente\n";
    }

    n2 = d3->isBissexto();

    if(n2){
        cout << d3->getAno() << " eh bissexto." << endl;
    }else{
        cout << d3->getAno() << " nao eh bissexto." << endl;
    }

    return 0;
}
