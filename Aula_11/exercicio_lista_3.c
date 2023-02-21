/*
Algoritmos - Exercícios sobre Funções - Prof. Salvador Alves

Crie uma função que gera 50 valores inteiros usando a função rand().
A cada número gerado chame uma função que verifica se o numero armazenado é maior que o valor armazenado na variável chamada maiorNumero, que deve ser global.
Chame uma terceira função que mostra o maior valor gerado.

Professor: Salvador Alves Melo
Aluno: Lucas da Silva Barbosa
Curso: Análise e Desenvolvimento de Sistemas
Instituição: UniProjeção
*/
#include <stdlib.h>
#include <stdio.h>
#include <time.h>
int maiorNumero;

void mostraMaiorValor(){
    printf("O maior valor gerado dentre os numeros foi %d",maiorNumero);
}

void verificaNumero(int vetor[], int n){
    int cont2,exibicao=1;

    for(cont2=0;cont2<n;cont2++){
        if(vetor[cont2] > maiorNumero){
            maiorNumero = vetor[cont2];
            printf("Foi atribuido a variavel maiorNumero o valor %d.\n",vetor[cont2]);
            printf("Para tal, o ciclo teve que rodar %d vezes.\n",exibicao);
        }
        exibicao++;
    }
}

int main(){
    int cont,vetor[50];

    printf("Sera gerado 50 numeros aleatorios.\n");
    system("pause");
    printf("Apos, sera verificado o maior numero entre eles e exibido na tela.\n");
    srand(time(NULL));
    system("pause");

    for(cont=0;cont<50;cont++){
    vetor[cont]=rand()%100;
    }
    verificaNumero(vetor, 50);
    system("pause");
    mostraMaiorValor();
    return 0;
}
