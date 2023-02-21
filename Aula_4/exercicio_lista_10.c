/*
Algoritmos - Lista de exercícios sobre if/else - Prof. Salvador Alves

Escreva um programa que leia as medidas dos lados de um triângulo e
escreva se ele é Equilátero, Isósceles ou Escaleno. Sendo que:
    − Triângulo Equilátero: possui os 3 lados iguais.
    − Triângulo Isóscele: possui 2 lados iguais.
    − Triângulo Escaleno: possui 3 lados diferentes.

Professor: Salvador Alves Melo
Aluno: Lucas da Silva Barbosa
Curso: Análise e Desenvolvimento de Sistemas
Instituição: UniProjeção
*/
#include<stdio.h>
#include<stdlib.h>

int main() {
    int x1,x2,x3;

    printf("Entre com tres valores inteiros para serem medidas dos lados de um triangulo.\n");
    scanf("%d",&x1);
    scanf("%d",&x2);
    scanf("%d",&x3);

    if(x1 == x2 && x1 == x3){
        printf("O triangulo e Equilatero");
    }
    else{
        if(x1 == x2 || x1 == x3 || x2 == x3){
                printf("O triangulo e Isosceles");
        }else{
                printf("O triangulo e Escaleno");
        }
    }
    return 0;
}
