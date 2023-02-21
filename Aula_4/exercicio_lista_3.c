/*
Algoritmos - Lista de exercícios sobre if/else - Prof. Salvador Alves

Escreva um programa que verifique a validade de uma senha fornecida
pelo usuário. A senha válida é o número 1234. Devem ser impressas as
seguintes mensagens:
    ACESSO PERMITIDO caso a senha seja válida.
    ACESSO NEGADO caso a senha seja inválida.

Professor: Salvador Alves Melo
Aluno: Lucas da Silva Barbosa
Curso: Análise e Desenvolvimento de Sistemas
Instituição: UniProjeção
*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main() {
    char senha[20];
    int valor;

    printf("Insira sua senha de ate 20 caracteres\n");
    gets(senha);

    valor = strcmp(senha,"alasca");
    if(valor == 0){
        printf("ACESSO PERMITIDO.\n");
    }
    else{
        printf("ACESSO NEGADO.\n");
    }
    return 0;
}
