/*
Algoritmos - Lista de exercícios sobre if/else - Prof. Salvador Alves

Tendo como entrada a altura e o sexo (codificado da seguinte forma:
1:feminino 2:masculino) de uma pessoa, construa um programa que
calcule e imprima seu peso ideal, utilizando as seguintes
    Fórmulas:
        - para homens: (72.7 * Altura) – 58
        - para mulheres: (62.1 * Altura) – 44.7

Professor: Salvador Alves Melo
Aluno: Lucas da Silva Barbosa
Curso: Análise e Desenvolvimento de Sistemas
Instituição: UniProjeção
*/
#include<stdio.h>
#include<stdlib.h>

int main() {
    float altura,calculo;
    int sexo;

    printf("Entre com o numero 1 se for homem ou com o numero 2 se for mulher. Apos, entre com a altura em metros.\n");
    scanf("%d",&sexo);
    scanf("%f",&altura);

    if(sexo == 1){
        calculo = (72.7*altura)-58;
        printf("O peso ideal desse homem e de %.2f .\n",calculo);
    }
    else{
        calculo = (62.1*altura)-44.7;
        printf("O peso ideal dessa mulher e de %.2f .\n",calculo);
    }
    return 0;
}
