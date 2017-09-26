#include "Trabalhador.h"

string Trabalhador::getNome(){
    return this->nome;
}

double Trabalhador::getSalarioMensal(){
    return this->salarioMensal;
}

double Trabalhador::calcularPagamento( int Horas ){
        return salarioMensal/4;
}

void Trabalhador::setNome( string nome ){
    this->nome = nome;
}

void Trabalhador::setSalarioMensal( double salario ){
    this->salarioMensal = salario;
}

Trabalhador::Trabalhador( string nome, double salario ){
    this->setNome( nome );
    this->setSalarioMensal( salario );
}
