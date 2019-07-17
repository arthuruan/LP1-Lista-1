#include "Horario.h"
#include <iostream>

using namespace std;

Horario::Horario(){
    hora = 0;
    minuto = 0;
    segundo = 0;
}

int Horario::getHora(){
    return hora;
}

int Horario::getMinuto(){
    return minuto;
}

int Horario::getSegundo(){
    return segundo;
}

void Horario::setHora(int h){
    if(h < 0){
        hora = 0;
    }else{
        hora = h;
    }
}

void Horario::setMinuto(int m){
    if(m < 0){
        minuto = 0;
    }else{
        minuto = m;
    }
}

void Horario::setSegundo(int s){
    if(s < 0){
        segundo = 0;
    }else{
        segundo = s;
    }
}

void Horario::setHorario(int h, int m, int s){
    setHora(h);
    setMinuto(m);
    setSegundo(s);
}

void Horario::avancarHorario(){

    if(segundo >= 59){
        segundo = 0;
        minuto ++;
    }else if(minuto >= 59){
        minuto = 0;
        hora ++;
    }else if(hora >= 24){
        hora = 0;
    }else{
        segundo ++;
    }
}
