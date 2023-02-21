/*
Algoritmos AULA 4 - Prof. Salvador Alves

Leia dois números diferentes e informe qual deles é o maior.

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

printf("Digite dois numeros inteiros diferentes! Os dois numeros devem ser diferentes!\n");
scanf("%d",&numero1);
scanf("%d",&numero2);

if(numero1 > numero2){
    printf("O primeiro numero e maior que o segundo numero\n");}
else{
    printf("O segundo numero e maior que o primeiro numero\n");}

system("pause");
return 0;
}
