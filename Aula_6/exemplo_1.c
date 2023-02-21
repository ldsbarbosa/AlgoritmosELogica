/*
Algoritmos AULA 6 - Prof. Salvador Alves

Exemplo de uso de if encadeado

Professor: Salvador Alves Melo
Aluno: Lucas da Silva Barbosa
Curso: Análise e Desenvolvimento de Sistemas
Instituição: UniProjeção
*/
#include<stdio.h>
#include<stdlib.h>
int main( )
{
    int N1,N2;

    printf("Digite o primeiro numero: ");
    scanf("%d",&N1);
    printf("Digite o segundo numero: ");
    scanf("%d",&N2);

    if(N1==N2)
        printf("Os numeros sao iguais!");
    else{
        if(N1>N2)
            printf("O maior valor e = %d", N1);
        else
            printf("O maior valor e = %d",N2);
    }
    printf("\n");
    system("pause");
    return (0);
}
