/*
Algoritmos - Exercícios sobre Funções - Prof. Salvador Alves

Desenvolva uma função que lê o valor de N e chama uma segunda função que calcula e escreve a tabuada de 1 até N. Mostre a tabuada no seguinte formato:

1 x N = N
2 x N = 2N
...
N x N = N2

Professor: Salvador Alves Melo
Aluno: Lucas da Silva Barbosa
Curso: Análise e Desenvolvimento de Sistemas
Instituição: UniProjeção
*/
#include <stdio.h>
#include <stdlib.h>

void calculaTabuada(int N){
    int i,valor;
    for(i=1;i<=N;i++){
    valor = i*N;
    printf("O numero %d multiplicado pelo numero inserido %d resulta em %d.\n",i,N,valor);
    }
}

int main(){
    int N;

    printf("Entre com um valor para exibir sua tabuada de 1 ate ele mesmo.\n");
    scanf("%d",&N);
    calculaTabuada(N);
    return 0;
}
