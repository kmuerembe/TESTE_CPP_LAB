#ifndef SISTEMA_H
#define SISTEMA_H

#include "Estudante.h"
#include "Professor.h"
#include <string>
using namespace std;

class Sistema {
private:
    Estudante* estudantes[10];
    Professor* professores[5];
    Pessoa* pessoas[15];
    int totalEstudantes;
    int totalProfessores;
    int totalPessoas;

public:
    Sistema();

    void cadastrarEstudante();
    void cadastrarProfessor();
    void mostrarEstudantes();
    void mostrarProfessores();
    void mostrarTodasPessoas();
    void pesquisarPorNome(string nome);
    void removerEstudante(int numero);
    void removerProfessor(int codigo);
    void verificarAprovacaoEstudante(int numero);
    void aumentarSalarioProfessor(int codigo, double percentual);
    void salvarArquivo(string nomeArquivo);
    void lerArquivo(string nomeArquivo);
};

#endif
