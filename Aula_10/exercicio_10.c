/*
Algoritmos - AULA 10 - Prof. Salvador Alves

Desenvolva um programa que lê uma frase e imprime somente as vogais da respectiva frase.

Professor: Salvador Alves Melo
Aluno: Lucas da Silva Barbosa
Curso: Análise e Desenvolvimento de Sistemas
Instituição: UniProjeção
*/
#include <stdio.h>
#include <stdlib.h>

int main(){
    int i,x=0;
    char frase[30];
    printf("Digite uma frase sem letras maiusculas!\n");
    gets(frase);

    printf("Sera impresso somente as vogais da frase!\n");
    system("pause");

    for(i=0;i<=30;i++){
        if(frase[i] == 'a' || frase[i] == 'e' || frase[i] == 'i' || frase[i] == 'o' || frase[i] == 'u'){
        printf("%c\t",frase[i]);
        }
    }
    printf("\nAs vogais da frase foram impressas!");
    return 0;
}
