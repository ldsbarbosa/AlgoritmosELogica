/*
Algoritmos - Lista de exercícios sobre if/else - Prof. Salvador Alves

Escreva um programa para ler o ano de nascimento de uma pessoa e
escrever uma mensagem que diga se ela poderá ou não votar este ano
(não é necessário considerar o mês em que ela nasceu).

Professor: Salvador Alves Melo
Aluno: Lucas da Silva Barbosa
Curso: Análise e Desenvolvimento de Sistemas
Instituição: UniProjeção
*/
#include<stdio.h>
#include<stdlib.h>

int main() {
    int anoNasc,y;

    printf("Entre com o ano que voce nasceu. Estamos em 2021.\n");
    scanf("%d",&anoNasc);

    if(anoNasc == 2003){
        printf("Por este ser o ano que faz dezoito anos, pode votar.\n");
    }
    else{
        if(anoNasc > 2003){
            printf("Voce nao pode votar.\n");
        }
        else{
            printf("Voce pode votar.\n");
        }
    }
    return 0;
}
