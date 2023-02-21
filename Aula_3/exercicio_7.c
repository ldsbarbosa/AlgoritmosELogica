/*
Algoritmos - Aula 3 - Prof. Salvador Alves

Leia o valor de um ângulo, converta de graus para radianos, calcule e mostre o valor do seno
e do cosseno desse ângulo. Utilize a constante M_PI, da biblioteca math.h, que fornece o valor de PI.
Lembre-se:
180 graus ---- pi radianos
X graus ---- Y radianos

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
    float x;
    float y;
    float seno;
    float cosseno;
    printf("Por gentileza, informe um valor de angulo em graus.\n\n");
    scanf("%f",&x);
    y = (x*M_PI)/180;
    seno = sin(y);
    cosseno = cos(y);
    printf("O valor do arngulo convertido em graus radianos: %f .\n\n O seno e o cosseno do angulo, em radianos, correspondem, respectivamente, a: %f %f \n\n",y,seno,cosseno);
    system("pause");
    return 0;
}
