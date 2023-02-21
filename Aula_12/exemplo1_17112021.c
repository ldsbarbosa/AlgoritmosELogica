/*
Algoritmos - AULA 12 (STRUCT) - Prof. Salvador Alves

Exemplo de uso do Struct

Professor: Salvador Alves Melo
Aluno: Lucas da Silva Barbosa
Curso: Análise e Desenvolvimento de Sistemas
Instituição: UniProjeção
*/
#include <stdio.h>
#include <stdlib.h>
int main (void)
{
struct {
int ano;
char nome[40];
} x,y;
x.ano = 1990;
printf("Entre com o seu nome\n");
gets(x.nome);
printf("%s nasceu em %d\n",x.nome,x.ano);
printf("Em que ano voce nasceu?\n",y.ano);
scanf("%d",&y.ano);
printf("Voce nasceu em %d\n",y.ano);
system("pause");
return(0);
}
