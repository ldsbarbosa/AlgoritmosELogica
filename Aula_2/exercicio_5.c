/*
Algoritmos AULA 2 - Prof. Salvador Alves

Leia o nome de um aluno e suas notas das quatro provas. Depois, calcule a média aritméticas das referidas notas e mostre o nome do aluno e a sua média.
média = (n1+n2+n3+n4) / 4

Professor: Salvador Alves Melo
Aluno: Lucas da Silva Barbosa
Curso: Análise e Desenvolvimento de Sistemas
Instituição: UniProjeção
*/
#include<stdio.h>
#include<stdlib.h>
int main( )
{
    char aluno[15];
    float n1;
    float n2;
    float n3;
    float n4;
    printf("Por favor, escreva o nome do aluno e pressione na tecla enter\n");
    scanf("%s",&aluno);
    printf("Por favor, escreva a nota da primeira prova e pressione na tecla enter\n");
    scanf("%f",&n1);
    printf("Por favor, escreva a nota da segunda prova e pressione na tecla enter\n");
    scanf("%f",&n2);
    printf("Por favor, escreva a nota da terceira prova e pressione na tecla enter\n");
    scanf("%f",&n3);
    printf("Por favor, escreva a nota da quarta prova e pressione na tecla enter\n");
    scanf("%f",&n4);
    float media=(n1+n2+n3+n4)/ 4;
    printf("A media do aluno %s e %f\n",aluno,media);
    system("pause");
    return 0;
}
