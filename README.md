
# SistemaPOO

Projeto desenvolvido na disciplina **Laboratório II (C++)** – Licenciatura em Informática, 2º ano.  
Data: 03/06/2026  
Duração: 120 min  

## 👥 Autores
- Alfredo Manuel Macoere  
- Kevin Muerembe  
- Elias Felix Mufunde  
- Alberto Massada  

---

## 📌 Descrição
Este projeto implementa um sistema orientado a objetos em C++ que demonstra conceitos fundamentais de **POO**:
- Encapsulamento  
- Herança  
- Polimorfismo (Late Binding)  
- Manipulação de registros  
- Persistência em arquivo  

---

## 🏗️ Estrutura do Projeto
- **Pessoa (classe abstrata)**  
  - Atributos: nome, idade, sexo  
  - Métodos: getters, setters, construtor parametrizado, destrutor virtual, método abstrato `mostrarDados()`  

- **Estudante (classe derivada)**  
  - Atributos: número do estudante, curso, notas (3)  
  - Métodos: `calcularMedia()`, `verificarAprovacao()`, sobrescrita de `mostrarDados()`  

- **Professor (classe derivada)**  
  - Atributos: código do professor, disciplina, salário  
  - Métodos: `aumentarSalario()`, sobrescrita de `mostrarDados()`  

- **Sistema (classe gerenciadora)**  
  - Vetores para armazenar até 10 estudantes e 5 professores  
  - Funcionalidades: cadastrar, listar, pesquisar, remover, verificar aprovação, aumentar salário, salvar e ler dados em arquivo  

---

## 📋 Funcionalidades
1. Cadastrar estudante  
2. Cadastrar professor  
3. Mostrar estudantes  
4. Mostrar professores  
5. Pesquisar pessoa por nome  
6. Remover estudante  
7. Remover professor  
8. Verificar aprovação de estudante  
9. Aumentar salário de professor  
10. Salvar dados em arquivo `.txt`  
11. Ler dados do arquivo `.txt`  
12. Sair  

---

## ▶️ Execução
Para compilar e executar o projeto:

```bash
make
./SistemaPOO.exe
