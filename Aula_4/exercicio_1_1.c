/*
Algoritmos AULA 4 - Prof. Salvador Alves

Teste de gets()

Professor: Salvador Alves Melo
Aluno: Lucas da Silva Barbosa
Curso: Análise e Desenvolvimento de Sistemas
Instituição: UniProjeção
*/
#include<stdio.h>
#include<stdlib.h>

int main( )
{
char nomeCompleto[100];
printf("Entre com seu nome completo\n");
gets(nomeCompleto);
printf("Seu nome e %s\n",nomeCompleto);
system("pause");
return 0;
}
