/*
Algoritmos AULA 4 - Prof. Salvador Alves

Teste da função strcpy()

Professor: Salvador Alves Melo
Aluno: Lucas da Silva Barbosa
Curso: Análise e Desenvolvimento de Sistemas
Instituição: UniProjeção
*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main( )
{
char nome[20];
char nome2[20];
printf("Insira um primeiro nome\n");
scanf("%s",&nome2);
strcpy(nome,nome2);
printf("String armezenada na variavel nome = %s\n",nome);
system("pause");
return 0;
}
