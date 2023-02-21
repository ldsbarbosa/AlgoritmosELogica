/*
Algoritmos AULA 6 - Prof. Salvador Alves

Leia um nome, preço de custo e preço de venda de um produto, e mostra se houve lucro, prejuízo ou empate.

Professor: Salvador Alves Melo
Aluno: Lucas da Silva Barbosa
Curso: Análise e Desenvolvimento de Sistemas
Instituição: UniProjeção
*/
#include<stdio.h>
#include<stdlib.h>
int main( )
{
    float precoCusto;
    float precoVenda;
    float lucro;
    char nome[20];

    printf("Digite o nome de um produto\n");
    gets(nome);
    printf("Digite o preco do custo\n");
    scanf("%f",&precoCusto);
    printf("Digite o preco da venda\n");
    scanf("%f",&precoVenda);

    lucro = precoVenda - precoCusto;

    if(lucro == 0)
        printf("Nao houve lucro\n");
    else
    {
    if(lucro > 0)
        printf("Tivemos lucro! O lucro foi %.1f\n",lucro);
    else
        printf("Tivemos prejuizo! O prejuizo foi %.1f\n",lucro);
    }
system("pause");
return
(0);
}
