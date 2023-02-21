/*
Algoritmos AULA 6 - Prof. Salvador Alves

Leia um número e informe se o mesmo é positivo, negativo ou nulo.

Professor: Salvador Alves Melo
Aluno: Lucas da Silva Barbosa
Curso: Análise e Desenvolvimento de Sistemas
Instituição: UniProjeção
*/
#include<stdio.h>
#include<stdlib.h>
int main( )
{
    int num;

    printf("Digite um numero inteiro");
    scanf("%d",&num);

    if(num>0)
        printf("O numero e positivo!");
    else{
        if(num<0)
            printf("O numero e negativo!");
        else
            printf("O numero e nulo. Nao e negativo nem positivo!");
    }
    system("pause");
    return
    (0);
}
