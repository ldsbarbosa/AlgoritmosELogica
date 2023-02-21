/*
Algoritmos - Lista de exercícios sobre if/else - Prof. Salvador Alves

Escreva um programa para ler 3 valores inteiros e escrever o maior deles.
Considere que o usuário não informará valores iguais.

Professor: Salvador Alves Melo
Aluno: Lucas da Silva Barbosa
Curso: Análise e Desenvolvimento de Sistemas
Instituição: UniProjeção
*/
#include<stdio.h>
#include<stdlib.h>

int main() {
    int x1,x2,x3;

    printf("Entre com tres valores inteiros diferentes.");
    scanf("%d",&x1);
    scanf("%d",&x2);
    scanf("%d",&x3);

    if(x1 > x2 && x1 > x3){
        printf("O maior valor e %d",x1);
    }
    else{
        if(x2 > x1 && x2 > x3){
                printf("O maior valor e %d",x2);
        }else{
                printf("O maior valor e %d",x3);
        }
    }
    return 0;
}
