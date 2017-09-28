#include "Medico.h"

// Metodos Set:
    void Medico::setNome( string nome ){ this->nome = nome; }
    void Medico::setAltura( double altura ){ this->altura = altura; }
    void Medico::setPeso( double peso ){ this->peso = peso; }
    void Medico::setCurso( string curso ){ this->curso = curso; }

// Metodos Get:
    string Medico::getNome(){ return nome; }
    string Medico::getCurso(){ return curso; }
    double Medico::getAltura(){ return altura; }
    double Medico::getPeso(){ return peso; }
