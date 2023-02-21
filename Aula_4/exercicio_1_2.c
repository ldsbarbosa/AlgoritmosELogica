/*
Algoritmos AULA 4 - Prof. Salvador Alves

Teste da função strcmp()

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
char senha[13];
int valor;
printf("Entre com a senha. A senha corresponde a um estado dos EUA.\n");
scanf("%s",&senha);
valor = strcmp(senha,"Alasca");
if(valor==0)
printf("A senha esta correta. Acesso autorizado.\n");
else
printf("A senha esta errada. Tente novamente.\n");
system("pause");
return 0;
}
