#ifndef PROFESSOR_H
#define PROFESSOR_H

#include "Pessoa.h"
#include <string>
using namespace std;

class Professor : public Pessoa {
private:
    int codigoProfessor;
    string disciplina;
    double salario;

public:
    Professor(string nome,
              int idade,
              string sexo,
              int codigoProfessor,
              string disciplina,
              double salario);

    void aumentarSalario(double percentual);
    int getCodigoProfessor();

    void mostrarDados() override; // importante o override
};

#endif
