/*
Algoritmos - AULA 11 - Prof. Salvador Alves

Crie um programa que lê um valor de ângulo e pergunta se o mesmo está em graus ou radianos.
Se estiver em graus chama uma função que converte para radianos e mostra o resultado.
Se estiver em radianos, chama outra função que converte para graus e mostra o resultado.

Professor: Salvador Alves Melo
Aluno: Lucas da Silva Barbosa
Curso: Análise e Desenvolvimento de Sistemas
Instituição: UniProjeção
*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float converteParaRadiano(float angulo){
    float angulo2 = (angulo * M_PI)/180;
    return angulo2;
}

float converteParaGraus(float angulo){
    float angulo2 = (angulo * 180)/ M_PI;
    return angulo2;
}

int main(){
    float angulo,anguloFinal;
    printf("Insira um angulo.\n");
    scanf("%f",&angulo);

    int decisao;
    printf("Se este angulo esta em graus, digite 1. Se estiver em radianos, digite 2.\n");
    scanf("%d",&decisao);

    if(decisao == 1){
        anguloFinal = converteParaRadiano(angulo);
        printf("O valor do angulo que estava em graus, agora em radianos e de %.6f\n",anguloFinal);
    }

    if(decisao == 2){
        anguloFinal = converteParaGraus(angulo);
        printf("O valor do angulo que estava em graus, agora em radianos e de %.6f\n",anguloFinal);
    }
    return 0;
}
