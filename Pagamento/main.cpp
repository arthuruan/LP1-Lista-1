#include "Pagamento.h"
#include <iostream>

using namespace std;

int main(){

    ControleDePagamentos* p1 = new ControleDePagamentos();

    p1->setPagamentos("arthur", 50.00, 0);
    p1->setPagamentos("arthur", 100.00, 1);

    cout << "Nome:" << p1->getPagamento()->getNomeDoFuncionario() << endl << "Salario: " << p1->getPagamento()->getValorPagamento() << endl;

    if(p1->existePagamentoParaFuncionario("arthur")){
        cout << "pagamento efetuado.\n";
    }else{
        cout << "nao existe pagamento.\n";
    }

    cout << "Total dos pagamentos: " << p1->calculaTotalDePagamentos() << endl;

    return 0;
}
