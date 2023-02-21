/*
Algoritmos AULA 6 - Prof. Salvador Alves

Leia o comprimento de 3 pedaços de madeira e verifique se os mesmos podem formar um triângulo.
Se formar um triângulo, determine e informe o tipo de triângulo:
Equilátero = 3 lados iguais
Isósceles = 2 lados iguais
Escaleno = 3 lados diferentes

Professor: Salvador Alves Melo
Aluno: Lucas da Silva Barbosa
Curso: Análise e Desenvolvimento de Sistemas
Instituição: UniProjeção
*/
#include<stdio.h>
#include<stdlib.h>
int main( )
{
    float madeira1;
    float madeira2;
    float madeira3;

    printf("Informe o comprimento de tres pedacos de madeira.\n");
    scanf("%f",&madeira1);
    scanf("%f",&madeira2);
    scanf("%f",&madeira3);

    if(madeira1>=madeira2+madeira3 || madeira2>madeira1+madeira3 || madeira3>madeira2+madeira1){
    printf("Nao e possivel formar um triangulo.\n");
    }
    else{
        printf("E possivel formar um triangulo.\n");
        if(madeira1 == madeira2 && madeira2 == madeira3){
        printf("O triangulo e equilatero!\n");
        }
        else{
            if(madeira1 == madeira2 || madeira2 == madeira3)
            printf("O triangulo e isosceles!\n");
            else
            printf("O triangulo e escaleno!\n");
        }
    }

system("pause");
return
(0);
}
