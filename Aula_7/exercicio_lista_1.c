/*
Algoritmos - Lista de Exercícios 3 – Laços de Repetição - Prof. Salvador Alves

Mostra a soma dos números de 1 a 100
    Soma=1+2+3+...+99+100=5050
    Dica: inicialize uma variável “soma”, que acumula a soma dos valores de 1 a 100. Inicialize esta variável com um valor que não afete o resultado de uma soma.

Professor: Salvador Alves Melo
Aluno: Lucas da Silva Barbosa
Curso: Análise e Desenvolvimento de Sistemas
Instituição: UniProjeção
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
