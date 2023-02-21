/*
Algoritmos - AULA 11 - Prof. Salvador Alves

Um dos exemplos do arquivo .pdf

Professor: Salvador Alves Melo
Aluno: Lucas da Silva Barbosa
Curso: Análise e Desenvolvimento de Sistemas
Instituição: UniProjeção
*/
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int calcula(int a , int b){
return a + b;
}

int main () {
int soma,a,b;
printf("Entre com dois numeros inteiros.\n");
scanf("%d%d",&a,&b);

printf("Soma = %d\n",calcula(a,b));
system("pause");

printf("Quadrado da Soma = %.1f\n",pow(calcula(a,b),2));
system("pause");
return 0;
}
