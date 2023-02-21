/*
Algoritmos - AULA 10 - Prof. Salvador Alves

Gere 30 números aleatórios entre 0 e 999 e armazene-os em um vetor. Mostrar os valores armazenados nas posições 1, 15, 29.

Professor: Salvador Alves Melo
Aluno: Lucas da Silva Barbosa
Curso: Análise e Desenvolvimento de Sistemas
Instituição: UniProjeção
*/
#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int main()
{
    int cont;
    int vetor[30];
    int x=1;

    printf("Gerando 3 numeros aleatorios entre 1 e 999!\n");
    srand(time(NULL));

    for(cont=0;cont<30;cont+=14){
    vetor[cont]=rand()%1000;
    printf("%d) %d\n",x,vetor[cont]);
    x+=14;
    }

    return 0;
}
