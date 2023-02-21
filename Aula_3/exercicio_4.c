/*
Algoritmos AULA 3 - Prof. Salvador Alves

Leia um valor que foi depositado na poupança e exiba o valor com o rendimento após um mês.
Considere que a taxa de juros da poupança é de 0,7% ao mês.

Professor: Salvador Alves Melo
Aluno: Lucas da Silva Barbosa
Curso: Análise e Desenvolvimento de Sistemas
Instituição: UniProjeção
*/
#include<stdio.h>
#include<stdlib.h>
int main( )
{
    float depositoPoupanca;
    float rendimentoFinal;
    float taxaJuros = 1.07;
    printf("Por gentileza, informe um valor que queira depositar na poupanca.\n\n");
    scanf("%f",&depositoPoupanca);
    rendimentoFinal = depositoPoupanca*taxaJuros;
    printf("Apos um mes com a taxa de juros a 7 por cento ao mes, seu rendimento sera de %1.f. Parabens.\n\n",rendimentoFinal);
    system("pause");
    return 0;
}
