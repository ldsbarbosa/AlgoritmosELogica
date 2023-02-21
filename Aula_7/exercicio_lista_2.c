/*
Algoritmos - Lista de Exerc�cios 3 � La�os de Repeti��o - Prof. Salvador Alves

L� um n�mero inteiro (N) entre 1 e 7, calcula e mostra o fatorial do referido n�mero. Exemplo:
    Fatorial de 5 = 5! = 1*2*3*4*5=120
    Dica: inicialize uma vari�vel �fatorial�, que acumula o produto dos valores de 1 a N. Inicialize esta vari�vel com um valor que n�o afete o resultado de um produto.

Professor: Salvador Alves Melo
Aluno: Lucas da Silva Barbosa
Curso: An�lise e Desenvolvimento de Sistemas
Institui��o: UniProje��o
*/

#include <stdio.h>

int main()
{
    int numero, fatorial = 0;

    printf("Informe um numero entre 1 e 7 para o calculo de seu fatorial\n");
    scanf("%i",&numero);
    fatorial = numero;
    for(int contador=1;contador < numero;contador++){
        fatorial *= (numero - contador);
    }
    printf("Numero: %i\nFatorial: %i\n",numero,fatorial);

    return 0;
}
