#include "Voo.h"
#include "Data.h"
#include "Horario.h"
#include <iostream>

using namespace std;

Voo::Voo(){
    for(int i = 0 ; i < 100 ; i ++){
        vagasV[i] = false;
    }
    Horario();
    Data();
    numero = 0;
}

Voo::Voo(int n, Data d, Horario h, bool v[100]){
    numero = n;
    for(int i = 0 ; i < 100 ; i ++){
        vagasV[i] = v[i];
    }
    dat = d;
    hor = h;
}

int Voo::getNumero(){
    return numero;
}

Data Voo::getDat(){
    return dat;
}

Horario Voo::getHor(){
    return hor;
}

int Voo::proximoLivre(){
    for(int i = 0 ; i < 100 ; i ++){
        if(vagasV[i] == false){
            return i;
        }
    }
    return 0;
}

bool Voo::verifica(int cadeira){
    if(vagasV[cadeira] == false){
        return true;
    }else{
        return false;
    }
}

bool Voo::ocupa(int cadeira){
    if(verifica(cadeira)){
        vagasV[cadeira] = true;
        return true;
    }else{
        return false;
    }
}

int Voo::vagas(){
    int contador = 0;

    for(int i = 0 ; i < 100 ; i++){
        if(vagasV[i] == false){
            contador ++;
        }
    }
    return contador;
}
