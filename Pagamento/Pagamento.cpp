#include "Pagamento.h"
#include <iostream>

using namespace std;

Pagamento::Pagamento(){
    valorPagamento = 0;
    nomeDoFuncionario = "Nome Invalido";
}

double Pagamento::getValorPagamento(){
    return valorPagamento;
}

string Pagamento::getNomeDoFuncionario(){
    return nomeDoFuncionario;
}

void Pagamento::setValorPagamento(double v){
    if(v < 0){
        valorPagamento = 0;
    }else{
        valorPagamento = v;
    }
}

void Pagamento::setNomeDoFuncionario(string n){
    nomeDoFuncionario = n;
}

ControleDePagamentos::ControleDePagamentos(){
    for(int i = 0; i < 100; i++){
        pag[i].setValorPagamento(0);
        pag[i].setNomeDoFuncionario("");
    }
}

Pagamento* ControleDePagamentos::getPagamento(){
    return pag;
}

void ControleDePagamentos::setPagamentos(string n, double p, int i){

    pag[i].setNomeDoFuncionario(n);
    pag[i].setValorPagamento(p);
}

double ControleDePagamentos::calculaTotalDePagamentos(){
    double aux = 0;

    for(int i = 0; i < 100; i++){
        aux += pag[i].getValorPagamento();
    }

    return aux;
}

bool ControleDePagamentos::existePagamentoParaFuncionario(string n){
    for(int i = 0; i < 100; i++){
        if(pag[i].getNomeDoFuncionario() == n){
            return true;
        }else{
            return false;
        }
    }
}
