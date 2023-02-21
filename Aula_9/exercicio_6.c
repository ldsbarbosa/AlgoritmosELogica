/*
Algoritmos - AULA 9 - DO WHILE - Prof. Salvador Alves

Leia o valor de N e mostre a série de Fibonacci até o termo N. A referida série funciona da seguinte forma:
    Os dois primeiros termos são iguais a 1
    O terceiro termo em diante é igual à soma dos dois termos anteriores
    Exemplo até o 7º termo da referida série: 1 1 2 3 5 8 13

Professor: Salvador Alves Melo
Aluno: Lucas da Silva Barbosa
Curso: Análise e Desenvolvimento de Sistemas
Instituição: UniProjeção
*/
#include <stdlib.h>
#include <stdio.h>

int main()
{
    int cont = 2, a,
    n1 = 0,n2 = 1,n3;

    printf("Entre com a quantidade de termos desejada. Valor inteiro. Valor minimo = 1\n");
    scanf("%d",&a);
    printf("%d\t",n2);

    do{
        n3 = n1 + n2;
        n1 = n2;
        n2 = n3;
        printf("%d\t",n3);
        cont++;
    }while(cont<=a);

    return 0;
}
