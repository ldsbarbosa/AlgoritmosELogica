/*
Algoritmos AULA 6 - Prof. Salvador Alves

Ler 3 números e informar o maior deles.

Professor: Salvador Alves Melo
Aluno: Lucas da Silva Barbosa
Curso: Análise e Desenvolvimento de Sistemas
Instituição: UniProjeção
*/
#include<stdio.h>
#include<stdlib.h>
int main( )
{
    float num1;
    float num2;
    float num3;

    printf("Informe tres numeros distintos uns dos outros\n");
    scanf("%f",&num1);
    scanf("%f",&num2);
    scanf("%f",&num3);

    if(num1 > num2 && num1 > num3){
    printf("O primeiro numero informado (%.1f) e o maior.\n",num1);
    }
    else{
        if(num2 > num1 && num2 > num3){
        printf("O segundo numero informado (%.1f) e o maior.\n",num2);
        }
        else{
            if(num3 > num2 && num3 > num1)
            printf("O terceiro numero informado (%.1f) e o maior.\n",num3);
        }
    }

system("pause");
return
(0);
}
