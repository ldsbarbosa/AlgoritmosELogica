/*
Algoritmos - Lista de exercícios sobre if/else - Prof. Salvador Alves

As maçãs custam R$ 0,30 cada se forem compradas menos do que uma
dúzia, e R$ 0,25 se forem compradas pelo menos doze. Escreva um
programa que leia o número de maçãs compradas, calcule e escreva o
valor total da compra.

Professor: Salvador Alves Melo
Aluno: Lucas da Silva Barbosa
Curso: Análise e Desenvolvimento de Sistemas
Instituição: UniProjeção
*/
#include<stdio.h>
#include<stdlib.h>

int main() {
    int qtdMaca;
    float preco;

    printf("Entre com a quantidade de macas compradas.\n");
    scanf("%d",&qtdMaca);

    if(qtdMaca >= 12){
        preco = qtdMaca*0.25;
        printf("O preco a ser pago e de %.2f reais.\n",preco);
    }
    else{
        preco = qtdMaca*0.3;
        printf("O preco a ser pago e de %.2f reais.\n",preco);
    }
    return 0;
}
