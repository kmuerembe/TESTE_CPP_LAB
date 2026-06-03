#include "Estudante.h"

Estudante::Estudante(string nome,
                     int idade,
                     string sexo,
                     int numeroEstudante,
                     string curso,
                     float n1,
                     float n2,
                     float n3)

: Pessoa(nome, idade, sexo)
{
    this->numeroEstudante = numeroEstudante;
    this->curso = curso;

    notas[0] = n1;
    notas[1] = n2;
    notas[2] = n3;
}

float Estudante::calcularMedia()
{
    return (notas[0] + notas[1] + notas[2]) / 3;
}

string Estudante::verificarAprovacao()
{
    float media = calcularMedia();

    if(media >= 14)
        return "Dispensado";
    else if(media >= 10)
        return "Admitido";
    else
        return "Reprovado";
}

int Estudante::getNumeroEstudante()
{
    return numeroEstudante;
}

void Estudante::mostrarDados()
{
    cout << "\n===== ESTUDANTE =====" << endl;
    cout << "Nome: " << nome << endl;
    cout << "Idade: " << idade << endl;
    cout << "Sexo: " << sexo << endl;
    cout << "Numero: " << numeroEstudante << endl;
    cout << "Curso: " << curso << endl;
    cout << "Media: " << calcularMedia() << endl;
    cout << "Estado: " << verificarAprovacao() << endl;
}
