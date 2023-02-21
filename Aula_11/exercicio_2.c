/*
Algoritmos - AULA 11 - Prof. Salvador Alves

Desenvolva um programa que lê três notas de um aluno.
A função main então deve chamar uma segunda função que calcula e mostra a média aritmética dessas notas.
Depois crie uma terceira função que recebe o valor da média e informa se o aluno foi aprovado ou reprovado (nota mínima para aprovação: 6,0).

Professor: Salvador Alves Melo
Aluno: Lucas da Silva Barbosa
Curso: Análise e Desenvolvimento de Sistemas
Instituição: UniProjeção
*/
#include <stdio.h>
#include <stdlib.h>

float calcula(float a,float b,float c){
    float media = (a + b + c)/3;
    return media;
}
float calcula2(float media){
    if(media >= 6){
        printf("O aluno foi aprovado!\n");
    }else{
        printf("O aluno foi reprovado!\n");
    }
}

int main(){
    float nota1,nota2,nota3,media;
    printf("Insira as tres notas de Matematica do aluno desejado.\n");
    scanf("%f%f%f",&nota1,&nota2,&nota3);
    media = calcula(nota1,nota2,nota3);
    printf("A media do aluno foi %.2f\n",media);
    system("pause");
    calcula2(media);
    system("pause");
    return 0;
}
