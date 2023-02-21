/*
Algoritmos AULA 4 - Prof. Salvador Alves

Leia dois números e informa se os mesmos são iguais ou diferentes.

Professor: Salvador Alves Melo
Aluno: Lucas da Silva Barbosa
Curso: Análise e Desenvolvimento de Sistemas
Instituição: UniProjeção
*/
#include<stdio.h>
#include<stdlib.h>

int main()
{
int numero1;
int numero2;

printf("Digite dois numeros inteiros\n");
scanf("%d",&numero1);
scanf("%d",&numero2);

if(numero1 == numero2){
    printf("Os numeros sao iguais\n");}
else{
    printf("Os numeros sao diferentes\n");}

system("pause");
return 0;
}
