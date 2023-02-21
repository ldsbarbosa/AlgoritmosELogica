/*
Algoritmos - Exercícios sobre Funções - Prof. Salvador Alves

Desenvolva um programa que:
    Lê o valor de N na função main, e passa esse valor para uma função chamada MostraResultado;
    Possui uma função chamada MostraResultado, que mostra na tela quais valores de 1 até N são divisíveis por 3, a partir de um retorno da função chamada verificaNumero;
    Possui uma função chamada verificaNumero que verifica se um número é  divisível por 3. Se for divisível, deve retornar o valor 1. Caso contrário, deve retornar o valor 0.

Professor: Salvador Alves Melo
Aluno: Lucas da Silva Barbosa
Curso: Análise e Desenvolvimento de Sistemas
Instituição: UniProjeção
*/
#include <stdlib.h>
#include <stdio.h>

int VerificaResultado(int N){
    if(N%3 == 0){
        return 1;
    }else{
        return 0;
    }
}
void MostraResultado(int N){
    int i;

    if(VerificaResultado(N) == 1){
        for(i=1;i<=N;i++){
            if(i%3 == 0){
                printf("%d\t",i);
            }
        }
    }
}
int main(){
    int N;

    printf("Informe o valor de N.\n");
    scanf("%d",&N);
    MostraResultado(N);
    system("pause");

    return 0;
}
