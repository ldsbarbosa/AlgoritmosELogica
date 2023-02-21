/*
Algoritmos - Exercícios sobre Funções - Prof. Salvador Alves

Desenvolva uma função que recebe o valor de x (angulo) e o número de termos da série abaixo, que calcula o valor do cosseno:
cosseno(x) = 1 - x2/2! + x4/4! - x6/6! + ....

Dicas:
    Use a função cos( ) da biblioteca math.h para comparar o seu resultado com aquele obtido pela função do C
    A variável cosseno deve ser do tipo double, senão não vai conseguir armazenar o valor correto. Para ler ou escrever usando double utilize %lf no lugar de %f.


Professor: Salvador Alves Melo
Aluno: Lucas da Silva Barbosa
Curso: Análise e Desenvolvimento de Sistemas
Instituição: UniProjeção
*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float calculaFatorial(int numero){
    float fatorial=1;
    int i;
    for(i=1;i<=numero;i++)
       fatorial = fatorial * i;
    return fatorial;
}

float calculaCosseno(float termos,float anguloX){
    float cosseno=1;
    int i;
    for(i=2;i<=termos;i+=2){
        if(i%4==0)
            cosseno = cosseno + pow(anguloX,i)/calculaFatorial(i);
        else
            cosseno = cosseno - pow(anguloX,i)/calculaFatorial(i);
    }
    return cosseno;
}

int main(){
    float termos,anguloX;
    int i;

    printf("Insira o valor do angulo x em radianos para o calculo de seu cosseno.\n");
    scanf("%f",&anguloX);
    printf("Insira o numero de termos.\n");
    scanf("%f",&termos);

    printf("O cosseno do angulo %f segundo a funcao do enunciado resulta em %f.\n",anguloX,calculaCosseno(termos,anguloX));
    system("pause");
    printf("O cosseno do angulo %f segundo a funcao da biblioteca math.h resulta em %f.\n",anguloX,cos(anguloX));
    system("pause");

    return 0;
}
