/*
Algoritmos AULA 6 - Prof. Salvador Alves

Uma empresa determinou um reajuste salarial de 5% a todos os seus funcionários.
Além disto, concedeu um abono de R$ 100,00 para aqueles que recebem até R$750,00.
Dado o valor do salário de um funcionário, informar para quanto ele será reajustado.
Desenvolva um algoritmo para atender a essa demanda.

Professor: Salvador Alves Melo
Aluno: Lucas da Silva Barbosa
Curso: Análise e Desenvolvimento de Sistemas
Instituição: UniProjeção
*/
#include<stdio.h>
#include<stdlib.h>
int main( )
{
    char nomeFuncio[20];
    float sala1;
    float sala2;

    printf("Informe o primeiro nome do funcionario.\n");
    scanf("%s",&nomeFuncio);
    printf("Informe o seu salario\n");
    scanf("%f",&sala1);

    if(sala1>750){
    sala2 = sala1*1.05;
    printf("Seu salario agora e %.1f.\n",sala2);
    }
    else{
        if(sala1<=750){
        sala2 = (sala1*1.05)+100;
        printf("Seu salario agora e %.1f.\n",sala2);
        }
    }

system("pause");
return (0);
}
