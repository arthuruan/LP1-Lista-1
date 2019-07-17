#include <iostream>
#include "Invoice.h"

using namespace std;

int main()
{
    Invoice* i1 = new Invoice();
    Invoice* i2 = new Invoice();

    i1->setNumitem(123);
    i1->setDescricao("Placa de video");
    i1->setQuantidade(2);
    i1->setPreco(500.00);

    //parametros invalidos
    i2->setNumitem(-1);
    i2->setDescricao("");
    i2->setQuantidade(-1);
    i2->setPreco(-0.5);

    cout << "I1:" << endl << "Numero: " << i1->getNumitem() << endl << "Descricao: " << i1->getDescricao() << endl << "Quantidade: " << i1->getQuantidade() << endl << "Preco: " << i1->getPreco() << endl;
    cout << "Preco total: " << i1->getInvoiceAmount() << endl << endl;

    cout << "I2:" << endl << "Numero: " << i2->getNumitem() << endl << "Descricao: " << i2->getDescricao() << endl << "Quantidade: " << i2->getQuantidade() << endl << "Preco: " << i2->getPreco() << endl;
    cout << "Preco total: " << i2->getInvoiceAmount() << endl << endl;

    return 0;
}
