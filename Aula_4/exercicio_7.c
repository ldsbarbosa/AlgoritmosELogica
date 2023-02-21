/*
Algoritmos AULA 4 - Prof. Salvador Alves

Leia um CPF, no formato de string, e informe se o mesmo tem 11 dígitos ou não.

Professor: Salvador Alves Melo
Aluno: Lucas da Silva Barbosa
Curso: Análise e Desenvolvimento de Sistemas
Instituição: UniProjeção
*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main( )
{
    char cpf[20];
    int comprimento;
    printf("Informe o seu CPF sem pontos e sem o traco\n");
    scanf("%s",&cpf);
    comprimento = strlen(cpf);
    if (comprimento == 11){
        printf("O seu CPF possui %d caracteres. Parabens!\n",comprimento);}
    else{
        printf("O seu CPF nao possui 11 caracteres, portanto, e invalido.\n");
    }
    system("pause");
    return 0;
}
