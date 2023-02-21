/*
Algoritmos AULA 10 - Prof. Salvador Alves

Desenvolva um programa que: lê 5 valores e armazena no vetor A, lê outros 5 valores e
armazena no vetor B e cria um vetor C com 10 posições, onde os cinco primeiros valores
são os valores do vetor A e os últimos 5 valores os valores do vetor B. Mostre o vetor C.
    Exemplo:
        vetor A
            5 19 23 45 12
        vetor B
            18 27 1 18 50
        vetor C
            5 19 23 45 12 18 27 1 18 50

Professor: Salvador Alves Melo
Aluno: Lucas da Silva Barbosa
Curso: Análise e Desenvolvimento de Sistemas
Instituição: UniProjeção
*/
#include <stdio.h>
#include <stdlib.h>

int main(){
    int contador,vetor1[5],vetor2[5],vetor3[10];

    printf("Insira cinco valores inteiros para o primeiro vetor!\n");
    for(contador=0;contador<5;contador++){
    scanf("%d",&vetor1[contador]);
    }

    printf("Excelente! Agora, insira cinco valores inteiros para o segundo vetor!\n");
    for(contador=0;contador<5;contador++){
    scanf("%d",&vetor2[contador]);
    }

    printf("Agora, mesclaremos os valores dos dois vetores em um terceiro vetor e exibiremos na tela!\n");
    system("pause");

    for(contador=0;contador<10;contador++){
    if(contador<5){
        vetor3[contador]=vetor1[contador];
        printf("%d\t",vetor3[contador]);
    }else{
        vetor3[contador]=vetor2[contador-5];
        printf("%d\t",vetor3[contador]);}
    }

    return 0;
}
