/*
Algoritmos - Lista de Exerc�cios 3 � La�os de Repeti��o - Prof. Salvador Alves

Mostra a soma dos n�meros de 1 a 100
    Soma=1+2+3+...+99+100=5050
    Dica: inicialize uma vari�vel �soma�, que acumula a soma dos valores de 1 a 100. Inicialize esta vari�vel com um valor que n�o afete o resultado de uma soma.

Professor: Salvador Alves Melo
Aluno: Lucas da Silva Barbosa
Curso: An�lise e Desenvolvimento de Sistemas
Institui��o: UniProje��o
*/

#include <stdio.h>

int main()
{
    int soma = 0;


    printf("--Soma de todos os numeros de 1 a 100--\n");
    system("pause");
    for(int contador=1;contador<=100;contador++){
        soma += contador;
    }
    printf("A soma resultou em %i\n",soma);
    system("pause");
    return 0;
}
