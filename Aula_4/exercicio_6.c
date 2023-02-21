/*
Algoritmos AULA 4 - Prof. Salvador Alves

Leia o nome de uma cidade e informe se o referido nome tem mais de 10 caracteres ou não.

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
    char cidade[50];
    int comprimento;
    printf("Informe o nome de uma cidade do Brasil");
    scanf("%s",&cidade);
    comprimento = strlen(cidade);
    printf("A cidade informada possui %d caracteres",comprimento);
    system("pause");
    return 0;
}
