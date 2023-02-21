/*
Algoritmos AULA 2 - Prof. Salvador Alves

Leia o nome de uma pessoa pelo teclado e mostre uma frase contendo o referido nome

Professor: Salvador Alves Melo
Aluno: Lucas da Silva Barbosa
Curso: Análise e Desenvolvimento de Sistemas
Instituição: UniProjeção
*/
#include<stdio.h>
#include<stdlib.h>
int main( )
{
    printf("Digitando o primeiro nome!\n");
    printf("Por favor, informe quantos caracteres possui seu primeiro nome\n");
    int tamanho;
    scanf("%i",&tamanho);
    printf("Por favor, digite o seu nome\n");
    char nome[tamanho];
    scanf("%s",&nome);
    printf("Nome digitado: %s\n",nome);
    system("pause");
    return 0;
}
