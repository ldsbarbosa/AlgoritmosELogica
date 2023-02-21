/*
Algoritmos - Lista de Exercícios 3 – Laços de Repetição - Prof. Salvador Alves

Calcula e mostra o resultado da seguinte conta:
    Soma = 50/1 + 49/2 + 48/3 + ... + 1/50

Professor: Salvador Alves Melo
Aluno: Lucas da Silva Barbosa
Curso: Análise e Desenvolvimento de Sistemas
Instituição: UniProjeção
*/

#include <stdio.h>
#include <time.h>

int main()
{
    float denominador = 1, numerador = 50, soma = 0;
    printf("Soma de varias fracoes 2\n");

    for(denominador = 1;denominador <= 50; denominador++){
        soma += numerador / denominador;
        numerador--;
    }

    printf("Resultado da soma 50/1 até 1/50: %.4f",soma);
    return 0;
}
