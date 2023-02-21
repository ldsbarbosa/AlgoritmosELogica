/*
Algoritmos AULA 4 - Prof. Salvador Alves

Leia a idade de uma pessoa e mostra se a mesma é maior de idade ou não.

Professor: Salvador Alves Melo
Aluno: Lucas da Silva Barbosa
Curso: Análise e Desenvolvimento de Sistemas
Instituição: UniProjeção
*/
#include<stdio.h>
#include<stdlib.h>

int main()
{
int idade;

printf("Quantos anos voce tem?\n");
scanf("%d",&idade);

if(idade >= 18){
    printf("Voce e maior de idade\n");}
else{
    printf("Voce e menor de idade\n");}

system("pause");
return 0;
}
