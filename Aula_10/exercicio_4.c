/*
Algoritmos - AULA 10 - Prof. Salvador Alves

Gere um vetor com 10 posições de memória.
O valor armazenado em cada posição do vetor deve ser igual ao índice da respectiva posição vezes 2.
    Exemplo:
    Posição do vetor 0 1 2 3 4 5 6 7 8 9
    Valor armazenado 0 2 4 6 8 10 12 14 16 18

Professor: Salvador Alves Melo
Aluno: Lucas da Silva Barbosa
Curso: Análise e Desenvolvimento de Sistemas
Instituição: UniProjeção
*/
#include <stdlib.h>
#include <stdio.h>

int main()
{
    int cont;
    int vetor[10];
    int x=1,z=0;

    printf("Gerando 10 numeros que sao o dobro do indice do vetor!\n");

    for(cont=0;cont<10;cont++){
    vetor[cont]=cont*2;
    printf("%d) Vetor com indice %d = %d\n",x,z,vetor[cont]);
    x++;
    z++;
    }

    return 0;
}
