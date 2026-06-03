#include "Sistema.h"
#include <iostream>
#include <fstream>
#include <limits>
using namespace std;

Sistema::Sistema() {
    totalEstudantes = 0;
    totalProfessores = 0;
    totalPessoas = 0;
}

void Sistema::cadastrarEstudante() {
    if(totalEstudantes >= 10) {
        cout << "\nLimite de estudantes atingido!\n";
        return;
    }

    string nome, sexo, curso;
    int idade, numero;
    float n1, n2, n3;

    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    cout << "\nNome: ";
    getline(cin, nome);
    cout << "Idade: ";
    cin >> idade;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    cout << "Sexo: ";
    getline(cin, sexo);
    cout << "Numero do estudante: ";
    cin >> numero;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    cout << "Curso: ";
    getline(cin, curso);
    cout << "Nota 1: ";
    cin >> n1;
    cout << "Nota 2: ";
    cin >> n2;
    cout << "Nota 3: ";
    cin >> n3;

    estudantes[totalEstudantes] = new Estudante(nome, idade, sexo, numero, curso, n1, n2, n3);
    pessoas[totalPessoas] = estudantes[totalEstudantes];

    totalEstudantes++;
    totalPessoas++;

    cout << "\nEstudante cadastrado com sucesso!\n";
}

void Sistema::cadastrarProfessor() {
    if(totalProfessores >= 5) {
        cout << "\nLimite de professores atingido!\n";
        return;
    }

    string nome, sexo, disciplina;
    int idade, codigo;
    double salario;

    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    cout << "\nNome: ";
    getline(cin, nome);
    cout << "Idade: ";
    cin >> idade;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    cout << "Sexo: ";
    getline(cin, sexo);
    cout << "Codigo: ";
    cin >> codigo;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    cout << "Disciplina: ";
    getline(cin, disciplina);
    cout << "Salario: ";
    cin >> salario;

    professores[totalProfessores] = new Professor(nome, idade, sexo, codigo, disciplina, salario);
    pessoas[totalPessoas] = professores[totalProfessores];

    totalProfessores++;
    totalPessoas++;

    cout << "\nProfessor cadastrado com sucesso!\n";
}

void Sistema::mostrarEstudantes() {
    for(int i = 0; i < totalEstudantes; i++) {
        estudantes[i]->mostrarDados();
    }
}

void Sistema::mostrarProfessores() {
    for(int i = 0; i < totalProfessores; i++) {
        professores[i]->mostrarDados();
    }
}

void Sistema::mostrarTodasPessoas() {
    cout << "\n===== TODAS AS PESSOAS =====\n";
    for(int i = 0; i < totalPessoas; i++) {
        pessoas[i]->mostrarDados(); // polimorfismo
    }
}

void Sistema::pesquisarPorNome(string nome) {
    for(int i = 0; i < totalPessoas; i++) {
        if(pessoas[i]->getNome() == nome) {
            pessoas[i]->mostrarDados();
            return;
        }
    }
    cout << "Pessoa nao encontrada!\n";
}

void Sistema::removerEstudante(int numero) {
    for(int i = 0; i < totalEstudantes; i++) {
        if(estudantes[i]->getNumeroEstudante() == numero) {
            delete estudantes[i];
            for(int j = i; j < totalEstudantes - 1; j++) {
                estudantes[j] = estudantes[j+1];
            }
            totalEstudantes--;
            cout << "Estudante removido!\n";
            return;
        }
    }
}

void Sistema::removerProfessor(int codigo) {
    for(int i = 0; i < totalProfessores; i++) {
        if(professores[i]->getCodigoProfessor() == codigo) {
            delete professores[i];
            for(int j = i; j < totalProfessores - 1; j++) {
                professores[j] = professores[j+1];
            }
            totalProfessores--;
            cout << "Professor removido!\n";
            return;
        }
    }
}

void Sistema::verificarAprovacaoEstudante(int numero) {
    for(int i = 0; i < totalEstudantes; i++) {
        if(estudantes[i]->getNumeroEstudante() == numero) {
            cout << estudantes[i]->verificarAprovacao() << endl;
            return;
        }
    }
    cout << "Estudante nao encontrado!\n";
}

void Sistema::aumentarSalarioProfessor(int codigo, double percentual) {
    for(int i = 0; i < totalProfessores; i++) {
        if(professores[i]->getCodigoProfessor() == codigo) {
            professores[i]->aumentarSalario(percentual);
            cout << "Salario atualizado!\n";
            return;
        }
    }
    cout << "Professor nao encontrado!\n";
}

void Sistema::salvarArquivo(string nomeArquivo) {
    ofstream arq(nomeArquivo.c_str()); // garante compatibilidade
    if(!arq) {
        cout << "Erro ao abrir arquivo!\n";
        return;
    }
    for(int i = 0; i < totalPessoas; i++) {
        arq << pessoas[i]->getNome() << ";"
            << pessoas[i]->getIdade() << ";"
            << pessoas[i]->getSexo() << endl;
    }
    arq.close();
    cout << "Dados salvos!\n";
}

void Sistema::lerArquivo(string nomeArquivo) {
    ifstream arq(nomeArquivo.c_str()); // garante compatibilidade
    if(!arq) {
        cout << "Erro ao abrir arquivo!\n";
        return;
    }
    string linha;
    while(getline(arq, linha)) {
        cout << linha << endl;
    }
    arq.close();
}
