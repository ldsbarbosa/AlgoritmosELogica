/*
Algoritmos - AULA 9 - DO WHILE - Prof. Salvador Alves

Leia o valor de N pelo teclado, e mostre todos os números divisíveis por 3 e por 7,
no intervalo de 1 a N. Um número é divisível por outro se o resto da divisão entre eles for zero.

Professor: Salvador Alves Melo
Aluno: Lucas da Silva Barbosa
Curso: Análise e Desenvolvimento de Sistemas
Instituição: UniProjeção
*/
#include <stdlib.h>
#include <stdio.h>

int main()
{
    int cont = 1,x;

    printf("Entre com um numero inteiro\n");
    scanf("%d",&x);

    do{
        if(cont%3==0 && cont%7==0){
            printf("%d\t",cont);
        }
        cont++;
    }while(cont<=x);

    return 0;
}
