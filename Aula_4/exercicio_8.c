/*
Algoritmos AULA 4 - Prof. Salvador Alves

Leia um CPF, no formato de string, e informe se é o CPF de João ou não.

Professor: Salvador Alves Melo
Aluno: Lucas da Silva Barbosa
Curso: Análise e Desenvolvimento de Sistemas
Instituição: UniProjeção
*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main( )
{
    char cpf[20];
    int valor;
    printf("Digite o CPF de Joao\n");
    scanf("%s",&cpf);
    valor = strcmp(cpf,"12345678901");
    if (valor == 0){
        printf("Ola, Joao! Parabens!\n");}
    else{
        printf("Chame o Joao. Precisamos dele.\n");
    }
    system("pause");
    return 0;
}
