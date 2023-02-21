/*
Algoritmos - AULA 8 - Prof. Salvador Alves

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
    int cont;
    cont=1;
    while(cont<=100){
    printf("%d) %d\n",cont,cont);
    cont++;
    }
    return 0;
}
