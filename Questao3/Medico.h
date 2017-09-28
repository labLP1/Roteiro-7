#ifndef MEDICO_H
#define MEDICO_H

#include <string>
using namespace std;

class Medico{
    private:
        string nome;
        string curso;
        double altura;
        double peso;

    public:
        void setNome( string nome ); 
        void setAltura( double altura );
        void setPeso( double peso );
        void setCurso( string curso );

        string getCurso();
        string getNome();
        double getNome();
        double getPeso();

 
};

#endif
