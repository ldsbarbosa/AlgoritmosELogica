/*
Algoritmos - AULA 11 - Prof. Salvador Alves

Desenvolva um programa que lê três notas de um aluno
e chama uma segunda função que recebe estas notas, calcula e mostra a média aritmética dessas notas.

Professor: Salvador Alves Melo
Aluno: Lucas da Silva Barbosa
Curso: Análise e Desenvolvimento de Sistemas
Instituição: UniProjeção
*/
#include <stdio.h>
#include <stdlib.h>

float calcula(float a,float b,float c){
    float media;
    media = (a + b + c)/3;
    return media;
}

int main(){
    float nota1,nota2,nota3,media;
    printf("Insira as tres notas de Portugues do aluno desejado.\n");
    scanf("%f%f%f",&nota1,&nota2,&nota3);
    media = calcula(nota1,nota2,nota3);
    printf("Media do aluno = %.2f\n",media);
    system("pause");
    return 0;
}
