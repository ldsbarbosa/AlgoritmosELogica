/*
Algoritmos - Lista de Exerc�cios 3 � La�os de Repeti��o - Prof. Salvador Alves

Calcule a potencia qualquer, sem usar a fun��o pow. O usu�rio dever� entrar com o valor da base e do expoente, e o programa dever� apresentar o resultado da pot�ncia. Exemplo:
    base = 2
    expoente = 3
    pot�ncia = 23 = 2*2*2 = 8

Professor: Salvador Alves Melo
Aluno: Lucas da Silva Barbosa
Curso: An�lise e Desenvolvimento de Sistemas
Institui��o: UniProje��o
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
