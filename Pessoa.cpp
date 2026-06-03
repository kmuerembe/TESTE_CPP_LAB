#include "Pessoa.h"

Pessoa::Pessoa(string nome, int idade, string sexo)
{
    this->nome = nome;
    this->idade = idade;
    this->sexo = sexo;
}

Pessoa::~Pessoa()
{
}

string Pessoa::getNome()
{
    return nome;
}

int Pessoa::getIdade()
{
    return idade;
}

string Pessoa::getSexo()
{
    return sexo;
}

void Pessoa::setNome(string nome)
{
    this->nome = nome;
}

void Pessoa::setIdade(int idade)
{
    this->idade = idade;
}

void Pessoa::setSexo(string sexo)
{
    this->sexo = sexo;
}
