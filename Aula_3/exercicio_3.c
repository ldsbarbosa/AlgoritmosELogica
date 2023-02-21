/*
Algoritmos AULA 3 - Prof. Salvador Alves

Calcule o salário de um vendedor ao final do mês. O salário final será o salário fixo mais 15% sobre as vendas efetuadas.
Os dados de entrada serão o salário fixo e o valor total das vendas efetuadas no mês.

Professor: Salvador Alves Melo
Aluno: Lucas da Silva Barbosa
Curso: Análise e Desenvolvimento de Sistemas
Instituição: UniProjeção
*/
#include<stdio.h>
#include<stdlib.h>
int main( )
{
    float salariofinalV;
    float salariofixoV = 2000;
    float vendaEfetuada = 200;
    int qtdVenda;
    printf("O trabalhador Roger tem o salario fixo de 2000 reais. Por cada venda, ganha 200. Quantas vendas ele fez neste mes?\n\n");
    scanf("%d",&qtdVenda);
    salariofinalV = salariofixoV+(vendaEfetuada*qtdVenda);
    printf("O trabalhador Roger ira receber %.1f reais. Parabens.\n\n",salariofinalV);
    system("pause");
    return 0;
}
