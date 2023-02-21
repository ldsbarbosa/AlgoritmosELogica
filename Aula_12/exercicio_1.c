/*
Algoritmos - AULA 12 (STRUCT) - Prof. Salvador Alves

Declare duas variáveis chamadas data1 e data2
do tipo estrutura que contém os campos dia, mês e ano.
Atribua valores e mostre os valores armazenados.
Use a primeira forma de declaração de estruturas vistas em sala.

Professor: Salvador Alves Melo
Aluno: Lucas da Silva Barbosa
Curso: Análise e Desenvolvimento de Sistemas
Instituição: UniProjeção
*/
#include <stdio.h>
#include <stdlib.h>

int main (){
    struct {
        int dia;
        int mes;
        int ano;
    }data1,data2;


    printf("Informe o dia da primeira data. \n");
    scanf("%d",&data1.dia);
    printf("Informe o mes da primeira data. \n");
    scanf("%d",&data1.mes);
    printf("Informe o ano da primeira data. \n");
    scanf("%d",&data1.ano);


    printf("Informe o dia da segunda data. \n");
    scanf("%d",&data2.dia);
    printf("Informe o mes da segundaa data. \n");
    scanf("%d",&data2.mes);
    printf("Informe o ano da segunda data. \n");
    scanf("%d",&data2.ano);

    printf("As datas informadas foram %d %d %d e %d %d %d.\n",data1.dia,data1.mes,data1.ano,data2.dia,data2.mes,data2.ano);

    return 0;
}
