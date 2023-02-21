/*
Algoritmos - Exercícios sobre Funções - Prof. Salvador Alves

Desenvolva um programa que:
    Lê um valor decimal na função main e chama a função converte;
    Possui uma função chamada converte que recebe um valor decimal e converte para binário. Depois mostra o respectivo valor binário.

Professor: Salvador Alves Melo
Aluno: Lucas da Silva Barbosa
Curso: Análise e Desenvolvimento de Sistemas
Instituição: UniProjeção
*/
#include <stdlib.h>
#include <stdio.h>

void converte(int N){
    int numeroBinario[16],i;

    for(i=15;i>-1;--i){
        if(N != 1 || N != 0){
            numeroBinario[i] = N%2;
            N/=2;
        }else{
            numeroBinario[i] = N%2;
            numeroBinario[i-1] = N/2;
            break;
        }
    }
    for(i=0;i<16;i++){
        if((i+1)%4 == 0){
            printf("%d.",numeroBinario[i]);
        }else{
            printf("%d",numeroBinario[i]);
        }
    }
}
int main(){
    int numeroDecimal;

    printf("Insira um valor em escala decimal para ser convertido para a escala binaria.\n");
    scanf("%d",&numeroDecimal);
    converte(numeroDecimal);
    system("pause");

    return 0;
}
