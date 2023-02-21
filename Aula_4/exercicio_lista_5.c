/*
Algoritmos - Lista de exercícios sobre if/else - Prof. Salvador Alves

Escreva um programa para ler 3 valores inteiros (considere que não
serão lidos valores iguais) e escrevê-los em ordem crescente.

Professor: Salvador Alves Melo
Aluno: Lucas da Silva Barbosa
Curso: Análise e Desenvolvimento de Sistemas
Instituição: UniProjeção
*/
#include<stdio.h>
#include<stdlib.h>

int main() {
    int x1,x2,x3;

    printf("Entre com tres valores inteiros.\n");
    scanf("%d",&x1);
    scanf("%d",&x2);
    scanf("%d",&x3);

    if(x1 > x2 && x1 > x3){
            if(x2 > x3){
                printf("%d %d %d\n",x1,x2,x3);
            }else{
                printf("%d %d %d\n",x1,x3,x2);
            }
    }else{
        if(x2 > x1 && x2> x3){
            if(x1 > x3){
                printf("%d %d %d\n",x2,x1,x3);
            }else{
                printf("%d %d %d\n",x2,x3,x1);
        }
        }else{
            if(x2 > x1){
                printf("%d %d %d\n",x3,x2,x1);
            }else{
                printf("%d %d %d\n",x3,x2,x1);
            }
        }
    }

    return 0;
}
