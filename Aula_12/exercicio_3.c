/*
Algoritmos - AULA 12 (STRUCT) - Prof. Salvador Alves

Crie uma estrutura com os seguintes dados de um funcionário:
nome, endereço, telefone, altura e idade. Crie um vetor com os dados de 5 funcionários. Mostre os valores armazenados.

Professor: Salvador Alves Melo
Aluno: Lucas da Silva Barbosa
Curso: Análise e Desenvolvimento de Sistemas
Instituição: UniProjeção
*/
//Crie uma estrutura com os seguintes dados de um funcionário: nome, endereço,telefone, altura e idade.
//Crie um vetor com os dados de 5 funcionários. Mostre os valores armazenados.
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

int main (){
    srand(time(NULL));
    struct{
        char nome[20];
        char endereco[20];
        int telefone;
        float altura;
        int idade;
    }funcionario[5];

    strcpy(funcionario[0].nome, "Gustavo");
    strcpy(funcionario[1].nome, "Antonio");
    strcpy(funcionario[2].nome, "Barbara");
    strcpy(funcionario[3].nome, "Geovana");
    strcpy(funcionario[4].nome, "Carlos");

    strcpy(funcionario[0].endereco, "Quadra 1");
    strcpy(funcionario[1].endereco, "Quadra 3");
    strcpy(funcionario[2].endereco, "Quadra 5");
    strcpy(funcionario[3].endereco, "Quadra 7");
    strcpy(funcionario[4].endereco, "Quadra 9");

    funcionario[0].telefone = 91111111;
    funcionario[1].telefone = 92221111;
    funcionario[2].telefone = 93331111;
    funcionario[3].telefone = 94441111;
    funcionario[4].telefone = 95551111;

    funcionario[0].altura = 1.78;
    funcionario[1].altura = 1.84;
    funcionario[2].altura = 1.61;
    funcionario[3].altura = 1.58;
    funcionario[4].altura = 1.80;

    funcionario[0].idade = (rand()%30) + 18;
    funcionario[1].idade = (rand()%30) + 18;
    funcionario[2].idade = (rand()%30) + 18;
    funcionario[3].idade = (rand()%30) + 18;
    funcionario[4].idade = (rand()%30) + 18;

    printf("TABELA DE FUNCIONARIOS\n");
    printf("Nome \t Endereco \t Telefone \t Altura \t Idade\n");
    printf("%s \t %s \t %d \t %f \t %d\n",funcionario[0].nome,funcionario[0].endereco,funcionario[0].telefone,funcionario[0].altura,funcionario[0].idade);
    printf("%s \t %s \t %d \t %f \t %d\n",funcionario[1].nome,funcionario[1].endereco,funcionario[1].telefone,funcionario[1].altura,funcionario[1].idade);
    printf("%s \t %s \t %d \t %f \t %d\n",funcionario[2].nome,funcionario[2].endereco,funcionario[2].telefone,funcionario[2].altura,funcionario[2].idade);
    printf("%s \t %s \t %d \t %f \t %d\n",funcionario[3].nome,funcionario[3].endereco,funcionario[3].telefone,funcionario[3].altura,funcionario[3].idade);
    printf("%s \t %s \t %d \t %f \t %d\n",funcionario[4].nome,funcionario[4].endereco,funcionario[4].telefone,funcionario[4].altura,funcionario[4].idade);
    return 0;
}
