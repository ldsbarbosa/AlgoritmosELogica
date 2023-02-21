/*
Algoritmos AULA 3 - Prof. Salvador Alves

Leia um valor e armazene em x, depois calcule e mostre o resultado da seguinte equação:
Y = 2*sqrt(x+1)
    ----------
    3*pow(x,3)

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
    float x;
    float y;
    printf("Por gentileza, informe um valor que queira atribuir a x.\n\n");
    scanf("%f",&x);
    y = (2*sqrt(x+1))/(3*pow(x,3));
    printf("O resultado da equacao envolvendo x corresponde a: %f\n\n",y);
    system("pause");
    return 0;
}
