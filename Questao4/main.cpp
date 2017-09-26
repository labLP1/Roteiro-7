#include <iostream>
#include <string>
//#include "Trabalhador.h"
#include "TrabalhadorAssalariado.h"
#include "TrabalhadorPorHora.h"

using namespace std;

int main()
{
    TrabalhadorAssalariado ta = TrabalhadorAssalariado("Jose", 1000);
    TrabalhadorPorHora tp = TrabalhadorPorHora("Maria", 1500);
    cout << "Trabalhador Assalariado" << endl;
    cout << "Nome: " << ta.getNome() << endl;
    cout << "Salario: " << ta.getSalarioMensal() << endl;
    cout << "Salario Semanal: " << ta.calculaPagamento(30);
    return 0;
    
}
