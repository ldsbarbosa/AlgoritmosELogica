/*
Algoritmos - Lista de Exercícios 3 – Laços de Repetição - Prof. Salvador Alves

Lê um número inteiro (N) entre 1 e 7, calcula e mostra o fatorial do referido número. Exemplo:
    Fatorial de 5 = 5! = 1*2*3*4*5=120
    Dica: inicialize uma variável “fatorial”, que acumula o produto dos valores de 1 a N. Inicialize esta variável com um valor que não afete o resultado de um produto.

Professor: Salvador Alves Melo
Aluno: Lucas da Silva Barbosa
Curso: Análise e Desenvolvimento de Sistemas
Instituição: UniProjeção
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
