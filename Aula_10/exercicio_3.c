/*
Algoritmos - AULA 10 - Prof. Salvador Alves

Crie um vetor com 100 posições e armazenar valores aleatórios.
Mostre todos os valores armazenados usando a tabulação ( \t ).
Identifique e mostre o maior valor gerado e sua posição no vetor.

Dica: inicialize uma variável com um valor muito pequeno e teste
se cada elemento do vetor é maior que esse valor, se for a variável passará a assumir o maior valor.

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
    int vetor[100];
    int x1=0;

    printf("Mostrando o maior valor gerado de 100 valores de um vetor!\n");
    srand(time(NULL));

    for(cont=0;cont<100;cont++){
    vetor[cont]=rand()%1000;
    printf("%d\t",vetor[cont]);
    }
    printf("\nDentre esses valores, mostraremos o maior!\n");

    system("pause");

    for(cont=0;cont<100;cont++){
    if(vetor[cont] > x1){
        x1 = vetor[cont];
    }
    }

    printf("%d\n",x1);
    return 0;
}
