/*
Algoritmos AULA 2 - Prof. Salvador Alves

Leia 2 valores e mostre na tela a soma, subtração, multiplicação, divisão e o resto dos valores lidos.

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
    int numero_1, numero_2;
    scanf("%i",&numero_1);
    printf("Agora, informe outro numero inteiro\n");
    scanf("%i",&numero_2);

    int soma = numero_1 + numero_2, subtracao = numero_1 - numero_2,
     divisao = numero_1 / numero_2, multiplicacao = numero_1 * numero_2, resto = numero_1 % numero_2;

    printf("Soma: %i\n",soma);
    printf("Subtracao: %i\n",subtracao);
    printf("Multiplicacao: %i\n",multiplicacao);
    printf("Divisao: %i\n",divisao);
    printf("Resto: %i\n",resto);
    system("pause");
    return 0;
}
