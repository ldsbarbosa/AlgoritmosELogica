/*
Algoritmos - AULA 10 (VETOR)- Prof. Salvador Alves

Gere 50 números aleatórios entre 0 e 99 e armazene-os em um vetor. Mostre cada um dos valores armazenados.

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
    int cont,vetor[50],x=0;

    printf("--VETOR--Gerando 50 numeros aleatorios entre 1 e 99!--\n");
    srand(time(NULL));

    for(cont=0;cont<50;cont++){
    vetor[cont]=rand()%100;
    x++;
    printf("%d) %d\n",x,vetor[cont]);
    }

    return 0;
}
