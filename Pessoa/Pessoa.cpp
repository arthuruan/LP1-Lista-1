#include "Pessoa.h"

Pessoa::Pessoa(){
    nome = "\0";
    idade = 1;
    telefone = "Sem numero";
}

Pessoa::Pessoa(string n) : Pessoa(){
    setNome(n);
}
Pessoa::Pessoa(string n, int i, string t) : Pessoa(){
    setNome(n);
    setIdade(i);
    setTelefone(t);
}

string Pessoa::getNome(){
    return nome;
}

int Pessoa::getIdade(){
    return idade;
}

string Pessoa::getTelefone(){
    return telefone;
}

void Pessoa::setNome(string n){
    if(n == ""){
        nome = "nome invalido";
    }else{
        nome = n;
    }
}

void Pessoa::setIdade(int i){
    if(i <= 0){
        i = 1;
    }else{
        idade = i;
    }
}

void Pessoa::setTelefone(string t){
    if(t == ""){
        telefone = "Telefone invalido";
    }else{
        telefone = t;
    }
}
