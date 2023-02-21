/*
Algoritmos AULA 5 - Prof. Salvador Alves

Leia um número e verifique se o mesmo é divisível exato por 3 e por 7 ao mesmo tempo.

Professor: Salvador Alves Melo
Aluno: Lucas da Silva Barbosa
Curso: Análise e Desenvolvimento de Sistemas
Instituição: UniProjeção
*/
#include<stdio.h>
#include<stdlib.h>
int main( )
{
int numero;
printf("Informe um numero inteiro.\n");
scanf("%d",&numero);
if (numero % 3 == 0 && numero % 7 == 0){
    printf("O numero informado é divisível por 7 e 3.\n");
    }
else{
    printf("O numero informado nao é divisível por 7 e 3.\n");
    }
system("pause");
return 0;
}
