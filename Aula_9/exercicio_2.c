/*
Algoritmos - AULA 9 - DO WHILE - Prof. Salvador Alves

Mostre os números de 1 a 100

Professor: Salvador Alves Melo
Aluno: Lucas da Silva Barbosa
Curso: Análise e Desenvolvimento de Sistemas
Instituição: UniProjeção
*/

#include <stdlib.h>
#include <stdio.h>

int main()
{
    int cont = 1;

    do{
        printf("%d) %d\n",cont,cont);
        cont++;
    }while(cont<=100);

    return 0;
}
