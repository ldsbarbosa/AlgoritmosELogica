/*
Algoritmos - Lista de exercícios sobre if/else - Prof. Salvador Alves

Escreva um programa para ler o número de lados de um polígono regular
e a medida do lado (em cm). Calcular e imprimir o seguinte:
    − Se o número de lados for igual a 3 escrever TRIÂNGULO e o valor da
    área
    − Se o número de lados for igual a 4 escrever QUADRADO e o valor da
    sua área.
    − Se o número de lados for igual a 5 escrever PENTÁGONO.
    − Caso o número de lados seja inferior a 3 escrever NÃO É UM POLÍGONO.
    − Caso o número de lados seja superior a 5 escrever POLÍGONO NÃO IDENTIFICADO.

Professor: Salvador Alves Melo
Aluno: Lucas da Silva Barbosa
Curso: Análise e Desenvolvimento de Sistemas
Instituição: UniProjeção
*/
#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(){
    float ladoMedida, altura;
    int ladoPoligono;
    float area;

    printf("Entre com o numero de lados de um poligono regular de 3 a 5. Apos, entre com a medida de um lado em centimetros.\n");
    scanf("%d",&ladoPoligono);
    scanf("%f",&ladoMedida);

    if(ladoPoligono < 3){
            printf("Nao e um poligono");
    }else{
        if(ladoPoligono > 5){
            printf("Poligono nao identificado");
        }else{
            if(ladoPoligono == 3){
                altura = sqrt(pow(ladoMedida,2)-(pow(ladoMedida/2,2)));
                area = ladoMedida*altura/2;
                printf("E um triangulo! Sua area e de %.2f\n",area);
        }
            else{
                if(ladoPoligono == 4){
                    area = pow(ladoMedida,2);
                    printf("E um quadrado! Sua area e de %.2f\n",area);
                }else{
                    altura = sqrt(pow(ladoMedida,2)-(pow(ladoMedida/2,2)));
                    area = (5*ladoMedida*altura)/2;
                    printf("E um pentagono! Sua area e de %.2f\n",area);
                }
            }
        }
    }
    return 0;
}
