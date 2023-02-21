/*
Algoritmos AULA 5 - Prof. Salvador Alves

Leia um número e informe se o mesmo está no intervalo entre 100 e 200, ou não.

Professor: Salvador Alves Melo
Aluno: Lucas da Silva Barbosa
Curso: Análise e Desenvolvimento de Sistemas
Instituição: UniProjeção
*/
#include<stdio.h>
#include<stdlib.h>
int main( )
{
int A;
printf("Informe um numero.\n");
scanf("%d",&A);
if (A > 100 && A < 200){
    printf("O numero informado esta entre 100 e 200.\n");
    }
else{
    printf("O numero informado nao esta entre 100 e 200.\n");
    }
system("pause");
return 0;
}
