/*
Algoritmos AULA 2 - Prof. Salvador Alves

Leia uma temperatura em graus Fahrenheit, converta para graus Celsius e apresenta na tela a temperatura convertida, seguindo esta fórmula:
C = (F-32) * (5.0/9.0)

Professor: Salvador Alves Melo
Aluno: Lucas da Silva Barbosa
Curso: Análise e Desenvolvimento de Sistemas
Instituição: UniProjeção
*/
#include<stdio.h>
#include<stdlib.h>
int main( )
{
    float tempFah;
    printf("Por favor, escreva uma temperatura em graus Fahrenheit e pressione na tecla enter\n");
    scanf("%f",&tempFah);
    float tempCel=(tempFah-32)*(5.0/9.0);
    printf("A temperatura em graus Celsius e %f\n",tempCel);
    system("pause");
    return 0;
}
