/*
Algoritmos - AULA 9 - DO WHILE - Prof. Salvador Alves

Leia o seu nome do teclado e mostre o mesmo 10 vezes na tela do computador.

Professor: Salvador Alves Melo
Aluno: Lucas da Silva Barbosa
Curso: Análise e Desenvolvimento de Sistemas
Instituição: UniProjeção
*/

#include <stdlib.h>
#include <stdio.h>

int main()
{
    printf("Digitando um nome!\n");
    printf("Por favor, informe quantos caracteres possui seu primeiro nome\n");
    int tamanho;
    scanf("%i",&tamanho);

    printf("Por favor, digite o seu nome\n");
    char nome[tamanho];
    scanf("%s",&nome);

    int cont = 1;

    do{
        printf("%d) %s\n",cont,nome);
        cont++;
    }while(cont <= 10);

    return 0;
}
