/*
Algoritmos AULA 4 - Prof. Salvador Alves

Teste da função strlen()

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
    int tamanho;
    char nome[20];
    printf("Entre com seu primeiro nome\n");
    scanf("%s",&nome);
    tamanho = strlen(nome);
    printf("Seu nome tem %d caracteres\n",tamanho);
    system("pause");
    return 0;
}
