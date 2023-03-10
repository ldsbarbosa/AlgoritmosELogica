/*
Algoritmos - Lista de Exerc?cios 3 ? La?os de Repeti??o - Prof. Salvador Alves

Calcula e mostra o resultado da seguinte conta:
    Soma = 1/1 + 1/2 + 1/3 + ... + 1/50

Professor: Salvador Alves Melo
Aluno: Lucas da Silva Barbosa
Curso: An?lise e Desenvolvimento de Sistemas
Institui??o: UniProje??o
*/

#include <stdio.h>
#include <time.h>

int main()
{
    float denominador = 1, numerador = 1, soma = 0;
    printf("Soma de varias fracoes 1\n");

    for(denominador = 1;denominador <= 50; denominador++){
        soma += numerador / denominador;
    }

    printf("Resultado da soma 1/1 at? 1/50: %.4f",soma);
    return 0;
}
