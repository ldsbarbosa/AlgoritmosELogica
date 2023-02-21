/*
Algoritmos - AULA 7 (FOR) - Prof. Salvador Alves

Leia o valor de N e mostre a s�rie de Fibonacci at� o termo N. A referida s�rie funciona da seguinte forma:
Os dois primeiros termos s�o iguais a 1
O terceiro termo em diante � igual � soma dos dois termos anteriores
Exemplo at� o 7� termo da referida s�rie: 1 1 2 3 5 8 13

Professor: Salvador Alves Melo
Aluno: Lucas da Silva Barbosa
Curso: An�lise e Desenvolvimento de Sistemas
Institui��o: UniProje��o
*/
#include <stdlib.h>
#include <stdio.h>

int main()
{
    int anterior=0,atual=1,proximo,cont,N;

    printf("--SERIE DE FIBONACCI USANDO LACO FOR--\n");
    printf("Quantos termos da serie (Comecando do inicio, que e 1)?\n");
    scanf("%d",&N);

    printf("%d\t",atual);

    for(cont=2;cont<=N;cont++){
        proximo = anterior + atual;
        anterior = atual;
        atual = proximo;
        printf("%d\t",proximo);
    }

    printf("\n");

    return 0;
}
