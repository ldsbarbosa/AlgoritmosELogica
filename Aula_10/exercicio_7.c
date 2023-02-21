/*
Algoritmos AULA 10 - Prof. Salvador Alves

Dado dois vetores, A (5 elementos) e B (8 elementos), faça um programa em C
que imprima todos os elementos comuns aos dois vetores, ou seja,
que pertença tanto ao vetor A quanto ao vetor B.

Professor: Salvador Alves Melo
Aluno: Lucas da Silva Barbosa
Curso: Análise e Desenvolvimento de Sistemas
Instituição: UniProjeção
*/
#include <stdio.h>
#include <stdlib.h>

int main(){
    int contador,vetorA[5],vetorB[8],vetorC[13];

    printf("Insira cinco valores inteiros para o vetor A!\n");
    for(contador=0;contador<5;contador++){
    scanf("%d",&vetorA[contador]);
    }

    printf("Excelente! Agora, insira oito valores inteiros para o vetor B!\n");
    for(contador=0;contador<8;contador++){
    scanf("%d",&vetorB[contador]);
    }

    printf("Agora, exibiremos na tela, em um terceiro vetor, os valores comuns entre os vetores A e B!\n");
    system("pause");

    for(contador=0;contador<8;contador++){
    if(vetorB[contador]==vetorA[0]||vetorB[contador]==vetorA[1]||vetorB[contador]==vetorA[2]||vetorB[contador]==vetorA[3]||vetorB[contador]==vetorA[4]){
        printf("%d\t",vetorB[contador]);
    }else{}
    }
    return 0;
}
