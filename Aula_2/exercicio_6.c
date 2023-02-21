/*
Algoritmos AULA 2 - Prof. Salvador Alves

Leia uma temperatura em graus Celsius, converta para graus Fahrenheit e apresente na tela a temperatura convertida, seguindo esta fórmula:
F = (9*C + 160) / 5

Professor: Salvador Alves Melo
Aluno: Lucas da Silva Barbosa
Curso: Análise e Desenvolvimento de Sistemas
Instituição: UniProjeção
*/
#include<stdio.h>
#include<stdlib.h>
int main( )
{
    float tempCel;
    printf("Por favor, escreva uma temperatura em graus Celsius e pressione na tecla enter\n");
    scanf("%f",&tempCel);
    float tempFah=(9*tempCel+160)/5;
    printf("A temperatura em graus Fahrenheit e %f\n",tempFah);
    system("pause");
    return 0;
}
