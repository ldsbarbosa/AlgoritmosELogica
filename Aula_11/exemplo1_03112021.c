/*
Algoritmos - AULA 11 - Prof. Salvador Alves

Prática aleatória

Professor: Salvador Alves Melo
Aluno: Lucas da Silva Barbosa
Curso: Análise e Desenvolvimento de Sistemas
Instituição: UniProjeção
*/
#include <stdio.h>

void mostraNome(){
    printf("Lucas Barbosa\n");
}

void mostraNome2(){
    printf("Sandra Barbosa\n");
}

int main(){
    int i;
    printf("Chamando a funcao void mostraNome\n");
    for(i=1;i<=10;i++){
        if(i%2 == 0){
        printf("%d) ",i);
        mostraNome();
        }else{
        printf("%d) ",i);
        mostraNome2();
        }
    }
    return 0;
}
