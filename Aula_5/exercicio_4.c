/*
Algoritmos AULA 5 - Prof. Salvador Alves

Imagine que você está tentando fazer um jogo de luta medieval com canhões, e tenta
simular a realidade. Para isso você precisa utilizar equações da física para determinar o
alcance da bala do canhão. Imagine também que o alvo está a 300 metros do canhão e tem
50 metros de comprimento. Faça um programa que calcula o alcance a partir da
velocidade de lançamento e do ângulo de tiro, e verifica se o tiro acertará alguma parte do
alvo.

Professor: Salvador Alves Melo
Aluno: Lucas da Silva Barbosa
Curso: Análise e Desenvolvimento de Sistemas
Instituição: UniProjeção
*/
#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main( )
{
    float velLan;
    float angTiro;
    float angTiroRad;
    float alcance;

    printf("Calcularemos o alcance de uma bola de canhao para acertar um alvo!\n");
    printf("Seu angulo e 60 graus, sua distancia ate o alvo e de 300 metros e o alvo possui 50 metros de comprimento\n");
    printf("Informe a  velocidade incial desejada. O valor e um numero real(float) e estara em metros por segundo\n");
    scanf("%f",&velLan);
    printf("Informe o angulo desejado. O valor e um numero real(float) e estara em graus\n");
    scanf("%f",&angTiro);

    angTiroRad = (angTiro*M_PI)/180;
    alcance = (pow(velLan,2)*sin(2*angTiroRad))/9.8;
    printf("O resultado do alcance deu %.1f\n",alcance);
    if(alcance>=300 && alcance<=350){
        printf("Kaboom! Acertou o alvo!\n");
    }
    else{
        printf("Errou o alvo!\n");
    }
    system("pause");
    return 0;
    }
