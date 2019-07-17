#include "Invoice.h"
#include <iostream>

Invoice::Invoice(){
    numitem = 0;
    descricao = "";
    quantidade = 0;
    preco = 0.0;
}

double Invoice::getInvoiceAmount(){
    return quantidade * preco;
}

int Invoice::getNumitem(){
    return numitem;
}

string Invoice::getDescricao(){
    return descricao;
}

int Invoice::getQuantidade(){
    return quantidade;
}

float Invoice::getPreco(){
    return preco;
}

void Invoice::setNumitem(int n){
    if(n < 0){
        numitem = 0;
    }else{
        numitem = n;
    }
}

void Invoice::setDescricao(string d){
    if(d == ""){
        descricao = "Sem descricao";
    }else{
        descricao = d;
    }
}

void Invoice::setQuantidade(int q){
    if(q < 0){
        quantidade = 0;
    }else{
        quantidade = q;
    }
}

void Invoice::setPreco(float p){
    if(p < 0){
        preco = 0.0;
    }else{
        preco = p;
    }
}
