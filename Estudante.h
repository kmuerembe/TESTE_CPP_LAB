#ifndef ESTUDANTE_H
#define ESTUDANTE_H

#include "Pessoa.h"
#include <string>
using namespace std;

class Estudante : public Pessoa {
private:
    int numeroEstudante;
    string curso;
    float notas[3];

public:
    Estudante(string nome,
              int idade,
              string sexo,
              int numeroEstudante,
              string curso,
              float n1,
              float n2,
              float n3);

    float calcularMedia();
    string verificarAprovacao();
    int getNumeroEstudante();

    void mostrarDados() override; // importante o override
};

#endif
