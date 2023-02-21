/*
Algoritmos AULA 2 - Prof. Salvador Alves

Calcule o consumo médio de um automóvel, sendo fornecida a distância total percorrida pelo automóvel e o total do combustível gasto
consumo = quilômetros/litro

Professor: Salvador Alves Melo
Aluno: Lucas da Silva Barbosa
Curso: Análise e Desenvolvimento de Sistemas
Instituição: UniProjeção
*/
#include<stdio.h>
#include<stdlib.h>
int main( )
{
    printf("Por favor, informe a distância total percorrida pelo seu automovel\n");
    float distanciaPercorrida, combustivel;
    scanf("%f",&distanciaPercorrida);
    printf("Agora, informe o total do combustível gasto pelo seu automovel\n");
    scanf("%f",&combustivel);

    float consumo = distanciaPercorrida / combustivel;
    printf("Consumo medio: %.2f\n",consumo);
    system("pause");
    return 0;
}
