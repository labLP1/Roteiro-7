#include "TrabalhadorAssalariado.h"

double TrabalhadorAssalariado::calcularPagamento( int Horas ){
    double salHora = (this->getSalarioMensal()/4)/40;
    return Horas*40;
}

TrabalhadorAssalariado::TrabalhadorAssalariado(string nome, double sal){
    Trabalhador( nome, sal );
}
