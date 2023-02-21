/*
Algoritmos - AULA 10 - Prof. Salvador Alves

Leia o primeiro nome de uma pessoa e mostre esse nome na ordem inversa.
Dica: você pode usar a função strlen( ) da biblioteca string.h que verifica
conta quantos caracteres foram armazenados em um string (procure saber como essa função funciona).
    Exemplo:
        LIMA
        AMIL

Professor: Salvador Alves Melo
Aluno: Lucas da Silva Barbosa
Curso: Análise e Desenvolvimento de Sistemas
Instituição: UniProjeção
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    int i;
    char nome[20],nomeInv[20];
    printf("Digite um nome\n");
    scanf("%s",&nome);

    for(i = strlen(nome) - 1; i>=0; i--){
        nomeInv[ strlen(nome) - (i+1) ] = nome[i];
    }
    printf("%s",nomeInv);
    return 0;
}
