/*
Algoritmos AULA 6 - Prof. Salvador Alves

Suponha que os valores de entrada sejam 1, 0 e -4. Qual seria a última informação armazenada nas variáveis do código abaixo?
Faça o teste de mesa, sem usar o computador, obtenha a resposta, e somente depois use o computador para confirmar a sua resposta.

Professor: Salvador Alves Melo
Aluno: Lucas da Silva Barbosa
Curso: Análise e Desenvolvimento de Sistemas
Instituição: UniProjeção
*/
#include<stdio.h>
#include<stdlib.h>
int main( )
{
    float x1,x2,delta;
    int a,b,c;
    float sala2;

    printf("Quais os coeficientes da equação?\n");
    scanf("%i%i%i",&a,&b,&c);
    delta = b*b-4*a*c;

    if(delta>0){
    printf("Delta = %.1f\n",delta);
    printf("Existem duas raizes reais distintas\n");
    x1=(-b+sqrt(delta))/(2*a);
    x2=(-b-sqrt(delta))/(2*a);
    printf("x1 = %.1f\tx2 = %.1f\n",x1,x2);
    }
    else{
        if(delta==0){
            printf("Delta = %.1f\n",delta);
            printf("Existe uma raiz real.\n");
            x1=(-b+sqrt(delta))/(2*a);
            printf("x1 = %.1f\n",x1);
        }
        else{
            printf("Delta = %.1f\n",delta);
            printf("Não existem raizes reais.\n");
        }
    }

system("pause");
return (0);
}
