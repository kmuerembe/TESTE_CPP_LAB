#ifndef PESSOA_H
#define PESSOA_H

#include <iostream>
#include <string>

using namespace std;

class Pessoa
{
protected:
    string nome;
    int idade;
    string sexo;

public:
    Pessoa(string nome, int idade, string sexo);
    virtual ~Pessoa();

    string getNome();
    int getIdade();
    string getSexo();

    void setNome(string nome);
    void setIdade(int idade);
    void setSexo(string sexo);

    virtual void mostrarDados() = 0;
};

#endif
