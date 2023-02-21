/*
Algoritmos - AULA 3 - Prof. Salvador Alves

Leia o valor da base e do expoente, depois calcule e mostre o valor da potência.

Professor: Salvador Alves Melo
Aluno: Lucas da Silva Barbosa
Curso: Análise e Desenvolvimento de Sistemas
Instituição: UniProjeção
*/

#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main( )
{
    float base;
    float expoente;
    float y;
    printf("Por gentileza, informe o valor da base e o valor do expoente.\n\n");
    scanf("%f",&base);
    scanf("%f",&expoente);
    y = pow(base,expoente);
    printf("O valor da potenciacao e %.1f\n\n",y);
    system("pause");
    return 0;
}
