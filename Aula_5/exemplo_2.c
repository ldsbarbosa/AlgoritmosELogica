/*
Algoritmos AULA 5 - Prof. Salvador Alves

Exemplo de uso da porta lógica && (AND)

Professor: Salvador Alves Melo
Aluno: Lucas da Silva Barbosa
Curso: Análise e Desenvolvimento de Sistemas
Instituição: UniProjeção
*/
#include<stdio.h>
#include<stdlib.h>
int main( )
{
    int A, B=5;
    printf("Digite 2 para Lucas e outro numero para Barbosa");
    scanf("%d",&A);
    if(A==2 && B==5)
        printf("Lucas\n");
    else
        printf("Barbosa\n");
    system("pause");
    return 0;
}
