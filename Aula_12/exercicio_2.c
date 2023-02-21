/*
Algoritmos - AULA 12 (STRUCT) - Prof. Salvador Alves

Refaça o exercício anterior utilizando a segunda forma de declaração de estruturas.

Professor: Salvador Alves Melo
Aluno: Lucas da Silva Barbosa
Curso: Análise e Desenvolvimento de Sistemas
Instituição: UniProjeção
*/
#include <stdio.h>
#include <stdlib.h>

int main (){
    int i;
    struct {
        int dia;
        int mes;
        int ano;
    }data1[3],data2[3];

    for(i=0;i<2;i++){
        if(i==0){
            printf("Informe o dia, mes e ano da primeira data. \n");
            scanf("%d%d%d",&data1[i].dia,&data1[i+1].mes,&data1[i+2].ano);
        }
        if(i==1){
            printf("Informe o dia, mes e ano da segunda data. \n");
            scanf("%d%d%d",&data2[i-1].dia,&data2[i].mes,&data2[i+1].ano);
        }

    }
    for(i=0;i<2;i++){
        if(i==0){
            printf("O dia, mes e ano da primeira data sao %d, %d e %d. \n",data1[i].dia,data1[i+1].mes,data1[i+2].ano);
        }
        if(i==1){
            printf("O dia, mes e ano da segunda data sao %d, %d e %d. \n",data2[i-1].dia,data2[i].mes,data2[i+1].ano);
        }
        system("pause");
    }

    printf("As datas informadas foram %d %d %d e %d %d %d.\n",data1[0].dia,data1[1].mes,data1[2].ano,data2[0].dia,data2[1].mes,data2[2].ano);

    return 0;
}
