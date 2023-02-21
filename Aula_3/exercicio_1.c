/*
Algoritmos AULA 3 - Prof. Salvador Alves

Faça o teste de mesa e mostre o último valor armazenado em cada uma das variáveis.

Professor: Salvador Alves Melo
Aluno: Lucas da Silva Barbosa
Curso: Análise e Desenvolvimento de Sistemas
Instituição: UniProjeção
*/
#include <stdio.h>
#include <stdlib.h>
int main (void)
{
 float x,y=2.5;
 int a,b=1,c;
 x=++y;
 x*=2;
 a=b+1;
 a++;
 c=2*a+b;
 a=c--;
 b=a++ + --c;
 printf("x =%.1f\ny=%.1f\na=%i\nb=%i\nc=%i\n",x,y,a,b,c);
 system("pause");
 return 0;
}
