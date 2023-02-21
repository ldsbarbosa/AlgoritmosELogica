/*
Algoritmos - AULA 11 - Prof. Salvador Alves

Desenvolva um programa que lê um valor do teclado.
    i. Se o valor lido for 1, chamará uma função que lê o valor do raio de uma, calcula e mostra o volume (V) da referida esfera.
    ii. Se o valor lido for 2, chamará outra função que lê o valor do aresta de um cubo, calcula e mostra o volume (V) do referido cubo usando a seguinte fórmula:
    V = aresta * aresta * aresta

Professor: Salvador Alves Melo
Aluno: Lucas da Silva Barbosa
Curso: Análise e Desenvolvimento de Sistemas
Instituição: UniProjeção
*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float calcula(float raioCir){
    float volume = (4 * M_PI * pow(raioCir,3))/3;
    return volume;
}

float calcula2(float arestaCubo){
    float volume = pow(arestaCubo,3);
    return volume;
}

int main(){
    int valorLido; // Variavel para o primeiro scanf
    float raioCir, volume1; // Variaveis para o primeiro if
    float arestaCubo, volume2; // Variaveis para o primeiro if
    printf("Entre com um valor no teclado que seja 1 ou 2.\n");
    scanf("%d",&valorLido);

    if(valorLido == 1){
        printf("Entre com o valor do raio de uma esfera.\n");
        scanf("%f",&raioCir);
        volume1 = calcula(raioCir);
        printf("O volume do raio digitado e de %.3f\n",volume1);
    }

    if(valorLido == 2){
        printf("Entre com o valor da aresta de um cubo.\n");
        scanf("%f",&arestaCubo);
        volume2 = calcula2(arestaCubo);
        printf("O volume da aresta digitada e de %.3f\n",volume2);
    }
    return 0;
}
