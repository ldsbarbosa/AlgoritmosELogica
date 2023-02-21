/*
Algoritmos AULA 5 - Prof. Salvador Alves

Exemplo de uso da porta lógica || (OR)

Professor: Salvador Alves Melo
Aluno: Lucas da Silva Barbosa
Curso: Análise e Desenvolvimento de Sistemas
Instituição: UniProjeção
*/
#include<stdio.h>
#include<stdlib.h>
int main( )
{
int A,B;
printf("Digite 2 e 5 para Salvador e outros numeros para Melo");
scanf("%d",&A);
scanf("%d",&B);
if(A==2 || B==5)
printf("Salvador\n");
else
printf("Melo\n");
system("pause");
return 0;
}
