#include "Professor.h"

Professor::Professor(string nome,
                     int idade,
                     string sexo,
                     int codigoProfessor,
                     string disciplina,
                     double salario)

: Pessoa(nome, idade, sexo)
{
    this->codigoProfessor = codigoProfessor;
    this->disciplina = disciplina;
    this->salario = salario;
}

void Professor::aumentarSalario(double percentual)
{
    salario += salario * percentual / 100;
}

int Professor::getCodigoProfessor()
{
    return codigoProfessor;
}

void Professor::mostrarDados()
{
    cout << "\n===== PROFESSOR =====" << endl;
    cout << "Nome: " << nome << endl;
    cout << "Idade: " << idade << endl;
    cout << "Sexo: " << sexo << endl;
    cout << "Codigo: " << codigoProfessor << endl;
    cout << "Disciplina: " << disciplina << endl;
    cout << "Salario: " << salario << endl;
}
