/*
Algoritmos - AULA 11 - Prof. Salvador Alves

Faça um programa que lê dois valores diferentes e chama uma função para saber qual dos dois é o maior.

Professor: Salvador Alves Melo
Aluno: Lucas da Silva Barbosa
Curso: Análise e Desenvolvimento de Sistemas
Instituição: UniProjeção
*/
#include <stdio.h>
#include <stdlib.h>

int main (){
    float valor1,valor2,compValores;

    printf("Entre com dois valores, sendo o primeiro valor diferente do segundo.\n");
    scanf("%f",&valor1);
    scanf("%f",&valor2);

    if(valor1 == valor2){
         printf("Os valores sao iguais!");
    }else{
    float comparaValor(float valor1, float valor2);
    compValores = comparaValor(valor1,valor2);
    printf("O maior valor e %f",compValores);
    }

    return 0;
}

float comparaValor(float valor1, float valor2){
    if(valor1 > valor2){
        return valor1;
    }
    if(valor1 < valor2){
        return valor2;
    }

}
