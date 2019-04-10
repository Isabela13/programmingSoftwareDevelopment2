#include "data.h"
#include <string>
#include <stdio.h>
#include <stdlib.h>
#include <iostream>

Data::Data (int dia , int mes, int ano){
    _dia = dia;
    _mes = mes;
    _ano = ano;
}

int Data::get_dia(){
    return _dia;
}


int Data::get_mes(){
    return _mes;
}


int Data::get_ano(){
    return _ano;
}

std::string Data::get_data_curto(){
    return std::to_string(get_dia()) + "/" + std::to_string(get_mes()) + "/" + std::to_string(get_ano());
}

std::string Data::get_data_longo(){
    std::string mes = std::to_string(get_mes());
    
    if( mes == "1" ){
        mes = "janeiro";
    }else if ("2"){
        mes = "fevereiro";
    }else if ("3"){
        mes = "marco";
    }else if ("4"){
        mes = "abril";
    }else if ("5"){
        mes = "maio";
    }else if ("6"){
        mes = "junho";
    }else if ("7"){
        mes = "julho";
    }else if ("8"){
        mes = "agosto";
    }else if ("9"){
        mes = "setembro";
    }else if ("10"){
        mes = "outubro";
    }else if ("11"){
        mes = "novembro";
    }else if ("12"){
        mes = "dezembro";
    }
    
    return std::to_string(get_dia()) + " de " + mes + " de " + std::to_string(get_ano());
}


