#include <iostream>
#include "Pessoa.h"

using namespace std;

int main()
{
    Pessoa* p1 = new Pessoa();
    Pessoa* p2 = new Pessoa("Arthur");
    Pessoa* p3 = new Pessoa("Gaby", 24, "87509982");

    //atributos invalidos
    p1->setNome("");
    p1->setIdade(-1);
    p1->setTelefone("");

    cout << "P1 = " << p1->getNome() << ", " << p1->getIdade() << ", " << p1->getTelefone() << endl;
    cout << "P2 = " << p2->getNome() << ", " << p2->getIdade() << ", " << p2->getTelefone() << endl;
    cout << "P3 = " << p3->getNome() << ", " << p3->getIdade() << ", " << p3->getTelefone() << endl;

    return 0;
}
