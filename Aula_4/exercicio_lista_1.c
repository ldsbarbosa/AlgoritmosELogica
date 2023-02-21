/*
Algoritmos - Lista de Exercícios if/else - Prof. Salvador Alves

Escreva um programa para ler 2 valores (considere que não serão informados valores iguais) e escrever o maior deles.

Professor: Salvador Alves Melo
Aluno: Lucas da Silva Barbosa
Curso: Análise e Desenvolvimento de Sistemas
Instituição: UniProjeção
*/
#include<stdio.h>
#include<stdlib.h>

int main() {
    int x,y;

    printf("Entre com dois numeros inteiros!\n");
    scanf("%d",&x);
    scanf("%d",&y);

    if(x == y){
        printf("Os numeros sao iguais.\n");
    }
    else{
        if(x > y){
            printf("O primeiro numero e maior que o segundo numero.\n");
        }
        else{
            printf("O segundo numero e maior que o primeiro numero.\n");
        }
    }
    return 0;
}
