#include "Sistema.h"
#include <iostream>
#include <string>
using namespace std;

int main() {
    Sistema sistema;
    int opcao;

    do {
        cout << "\n===== MENU =====\n";
        cout << "1 - Cadastrar estudante\n";
        cout << "2 - Cadastrar professor\n";
        cout << "3 - Mostrar estudantes\n";
        cout << "4 - Mostrar professores\n";
        cout << "5 - Pesquisar pessoa (por nome)\n";
        cout << "6 - Remover estudante\n";
        cout << "7 - Remover professor\n";
        cout << "8 - Verificar aprovacao de estudante\n";
        cout << "9 - Aumentar salario de professor\n";
        cout << "10 - Salvar dados em arquivo\n";
        cout << "11 - Ler dados do arquivo\n";
        cout << "0 - Sair\n";

        cout << "\nOpcao: ";
        cin >> opcao;

        switch(opcao) {
            case 1: sistema.cadastrarEstudante(); break;
            case 2: sistema.cadastrarProfessor(); break;
            case 3: sistema.mostrarEstudantes(); break;
            case 4: sistema.mostrarProfessores(); break;
            case 5: {
                string nome;
                cout << "Digite o nome para pesquisar: ";
                cin.ignore();
                getline(cin, nome);
                sistema.pesquisarPorNome(nome);
                break;
            }
            case 6: {
                int numero;
                cout << "Digite o numero do estudante: ";
                cin >> numero;
                sistema.removerEstudante(numero);
                break;
            }
            case 7: {
                int codigo;
                cout << "Digite o codigo do professor: ";
                cin >> codigo;
                sistema.removerProfessor(codigo);
                break;
            }
            case 8: {
                int numero;
                cout << "Digite o numero do estudante: ";
                cin >> numero;
                sistema.verificarAprovacaoEstudante(numero);
                break;
            }
            case 9: {
                int codigo;
                double perc;
                cout << "Digite o codigo do professor: ";
                cin >> codigo;
                cout << "Digite o percentual de aumento: ";
                cin >> perc;
                sistema.aumentarSalarioProfessor(codigo, perc);
                break;
            }
            case 10: {
                string arquivo;
                cout << "Nome do arquivo para salvar: ";
                cin >> arquivo;
                sistema.salvarArquivo(arquivo);
                break;
            }
            case 11: {
                string arquivo;
                cout << "Nome do arquivo para ler: ";
                cin >> arquivo;
                sistema.lerArquivo(arquivo);
                break;
            }
            case 0: cout << "\nEncerrando...\n"; break;
            default: cout << "\nOpcao invalida!\n";
        }

    } while(opcao != 0);

    return 0;
}
