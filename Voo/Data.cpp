#include "Data.h"
#include <iostream>

using namespace std;

Data::Data(){
    dia = 1;
    mes = 1;
    ano = 1;
}

Data::Data(int d, int m, int a) : Data() {
    setDia(d);
    setMes(m);
    setAno(a);
}

int Data::getDia(){
    return dia;
}

int Data::getMes(){
    return mes;
}

int Data::getAno(){
    return ano;
}

string Data::getMesExtenso(){
    switch(mes){
        case 1:
            return "Janeiro";
            break;
        case 2:
            return "Fevereiro";
            break;
        case 3:
            return "Marco";
            break;
        case 4:
            return "Abril";
            break;
        case 5:
            return "Maio";
            break;
        case 6:
            return "Junho";
            break;
        case 7:
            return "Julho";
            break;
        case 8:
            return "Agosto";
            break;
        case 9:
            return "Setembro";
            break;
        case 10:
            return "Outubro";
            break;
        case 11:
            return "Novembro";
            break;
        case 12:
            return "Dezembro";
            break;
    }
}

int Data::Compara(Data objeto){
    if((objeto.dia == dia) && (objeto.mes == mes) && (objeto.ano == ano)){
        return 0;
    }if((objeto.dia == dia) && (objeto.mes == mes)){
        if(objeto.ano > ano){
            return -1;
        }else if(objeto.ano < ano){
            return 1;
        }
    }else if((objeto.dia < dia) && (objeto.mes < mes) && (objeto.ano < ano)){
        return 1;
    }else if((objeto.dia > dia) && (objeto.mes > mes) && (objeto.ano > ano)){
        return -1;
    }
}

bool Data::isBissexto(){
    if(ano % 100 == 0){
        if(ano % 400 == 0){
            return true;
        }
    }else if(ano % 4 == 0 ){
        return true;
    }else{
        return false;
    }
}

void Data::setDia(int d){
    if(d <= 0 || d > 31){
        dia = 1;
    }else{
        dia = d;
    }
}

void Data::setMes(int m){
    if(m <= 0 || m > 12){
        mes = 1;
    }else{
        mes = m;
    }
}

void Data::setAno(int a){
    if(a <= 0){
        ano = 1;
    }else{
        ano = a;
    }
}



