/*
Algoritmos - AULA 10 - Prof. Salvador Alves

Gere 10 números aleatórios entre 0 e 99 e armazene em um vetor,
conte quantos desses números são pares, mostre a respectiva posição do vetor e o número par armazenado.

Professor: Salvador Alves Melo
Aluno: Lucas da Silva Barbosa
Curso: Análise e Desenvolvimento de Sistemas
Instituição: UniProjeção
*/
#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int main(){
    int x=0,vetor[10],cont;
    srand(time(NULL));

    printf("Sera gerado 10 numeros aleatorios entre 1 e 99 em um vetor. Os numeros pares serao exibidos.\n\n");
    system("pause");
    printf("NUMEROS PARES!\n\n");

    for(cont=0;cont<10;cont++){
    vetor[cont]=rand()%100;
    if(vetor[cont]%2 == 0){
        printf("Vetor na posicao %d -> %d\n",x,vetor[cont]);
    }else{}
    x++;
    }

    return 0;
}
