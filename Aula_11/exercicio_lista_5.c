/*
Algoritmos - Exercícios sobre Funções - Prof. Salvador Alves

Escreva uma função que recebe por parâmetro um valor inteiro e positivo N e retorna o valor de S.

S = 1 + ½ + 1/3 + ¼ + 1/5 + ... + 1/N.

Professor: Salvador Alves Melo
Aluno: Lucas da Silva Barbosa
Curso: Análise e Desenvolvimento de Sistemas
Instituição: UniProjeção
*/
#include <stdio.h>
#include <stdlib.h>

float valorRetornado(int N){
    float denominador,soma=0;
    for(denominador=1;denominador<=N;denominador++){
        soma = soma +1/denominador;
    }
    return soma;
}

int main(){
    int N;
    printf("Insira um valor inteiro e positivo.\n");
    scanf("%d",&N);
    printf("O valor de S e %f",valorRetornado(N));
    return 0;
}
