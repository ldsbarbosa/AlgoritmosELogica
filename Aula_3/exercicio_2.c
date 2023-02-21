/*
Algoritmos AULA 3 - Prof. Salvador Alves

Leia dois valores para as variáveis A e B e efetua a troca dos valores de forma que a variável A passe a ter o valor da variável B e a variável B passe a ter o valor da variável A.
Apresente os valores trocados.

Professor: Salvador Alves Melo
Aluno: Lucas da Silva Barbosa
Curso: Análise e Desenvolvimento de Sistemas
Instituição: UniProjeção
*/
#include<stdio.h>
#include<stdlib.h>
int main( )
{
    float variavelA = 23;
    float variavelB = 76;
    float variavelC;
    printf("Iremos trocar a variavel A %f e a variavel B %f\n",variavelA,variavelB);
    system("pause");
    variavelC = variavelB;
    variavelB = variavelA;
    variavelA = variavelC;
    printf("As variaveis estao trocadas. Variavel A = %f .Variavel B = %f\n",variavelA,variavelB);
    system("pause");
    return 0;
}
