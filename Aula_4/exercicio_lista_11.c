/*
Algoritmos - Lista de exercícios sobre if/else - Prof. Salvador Alves

Escreva um programa que leia o valor de 3 ângulos de um triângulo e
escreva se o triângulo é Acutângulo, Retângulo ou Obtusângulo. Sendo
que:
    − Triângulo Retângulo: possui um ângulo reto. (igual a 90º)
    − Triângulo Obtusângulo: possui um ângulo obtuso. (maior que90º)
    − Triângulo Acutângulo: possui três ângulos agudos. (menor que 90º)

Professor: Salvador Alves Melo
Aluno: Lucas da Silva Barbosa
Curso: Análise e Desenvolvimento de Sistemas
Instituição: UniProjeção
*/
#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main() {
    float x1,x2,x3;

    printf("Entre com tres valores para serem medidas dos angulos(em graus) de um triangulo.\n");
    scanf("%f",&x1);
    scanf("%f",&x2);
    scanf("%f",&x3);

    if(x1 == 90 || x2 == 90 || x3 == 90){
        printf("O triangulo e Retangulo");
    }
    else{
        if(x1 > 90 || x2  > 90 || x3 > 90){
                printf("O triangulo e Obstusangulo");
        }else{
                printf("O triangulo e Acutangulo");
        }
    }
    return 0;
}
