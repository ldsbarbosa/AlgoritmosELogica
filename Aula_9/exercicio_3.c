/*
Algoritmos - AULA 9 - DO WHILE - Prof. Salvador Alves

Mostre os números 5 a 50, variando de 5 em 5
        Exemplo: 5 10 15 ... 50

Professor: Salvador Alves Melo
Aluno: Lucas da Silva Barbosa
Curso: Análise e Desenvolvimento de Sistemas
Instituição: UniProjeção
*/

#include <stdlib.h>
#include <stdio.h>

int main()
{
    int cont = 0;
    printf("Mostrando os numeros 5 a 50, variando de 5 em 5");

    do{
        printf("[%d]\n",cont,cont);
        cont += 5;
    }while(cont <= 50);

    return 0;
}
