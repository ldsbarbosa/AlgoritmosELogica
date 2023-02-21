/*
Algoritmos - Lista de Exercícios 3 – Laços de Repetição - Prof. Salvador Alves

Calcule a potencia qualquer, sem usar a função pow. O usuário deverá entrar com o valor da base e do expoente, e o programa deverá apresentar o resultado da potência. Exemplo:
    base = 2
    expoente = 3
    potência = 23 = 2*2*2 = 8

Professor: Salvador Alves Melo
Aluno: Lucas da Silva Barbosa
Curso: Análise e Desenvolvimento de Sistemas
Instituição: UniProjeção
*/

#include <stdio.h>

int main()
{
    int base, expoente, resultado = 1;
    printf("Calculo de pontencia!\n");
    printf("Informe, em numero inteiro, o valor da base.\n");
    scanf("%i",&base);
    printf("Informe, em numero inteiro, o valor do expoente.\n");
    scanf("%i",&expoente);
    for(int i = 1; i <= expoente; i++){
        resultado *= base;
    }

    printf("Resultado:\n%i",resultado);
    return 0;
}
