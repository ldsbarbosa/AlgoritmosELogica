/*
Algoritmos AULA 2 - Prof. Salvador Alves

Leia um valor qualquer pelo teclado e mostre o dobro do valor lido.

Professor: Salvador Alves Melo
Aluno: Lucas da Silva Barbosa
Curso: Análise e Desenvolvimento de Sistemas
Instituição: UniProjeção
*/
#include<stdio.h>
#include<stdlib.h>
int main( )
{
    printf("Por favor, informe um numero inteiro\n");
    int numero;
    scanf("%i",&numero);
    printf("Dobro do numero: %i\n",(numero*2));
    system("pause");
    return 0;
}
