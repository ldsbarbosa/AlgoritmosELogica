/*
Algoritmos AULA 3 - Prof. Salvador Alves

Leia um valor e armazene em x, depois calcule e mostre o resultado da raiz de x
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
    printf("Por gentileza, informe um valor.\n\n");
    scanf("%f",&x);
    y = sqrt(x);
    printf("A raiz quadrada do numero: %f\n\n",y);
    system("pause");
    return 0;
}
