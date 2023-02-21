/*
Algoritmos - AULA 12 (STRUCT) - Prof. Salvador Alves

Crie um estrutura chamada notas com os seguintes campos:
nome, vetor com 3 notas e média.
Leia os dados de 5 alunos e mostre a média de cada aluno.
Informe aqueles que foram aprovados com média maior ou igual a 6.

Professor: Salvador Alves Melo
Aluno: Lucas da Silva Barbosa
Curso: Análise e Desenvolvimento de Sistemas
Instituição: UniProjeção
*/
//Crie um estrutura chamada notas com os seguintes campos, nome, vetor com 3 notas e média.
//Leia os dados de 5 alunos e mostre a média de cada aluno. Informe aqueles que foram aprovados com média maior ou igual a 6.
#include <stdio.h>
#include <stdlib.h>

int main (){
    int x,y;
    struct notasAluno{
        char nome[20];
        float nota[3];
        float media;
        };
    struct notasAluno aluno[5];

    for(x=0;x<5;++x){
        float soma=0;
        printf("Entre com o nome do estudante %d\n",x+1);
        scanf("%s",&aluno[x].nome);
        printf("Entre com as tres notas do %s\n",aluno[x].nome);
        for(y=0;y<3;++y){
            scanf("%f",&aluno[x].nota[y]);
            soma += aluno[x].nota[y];
        }
        aluno[x].media = soma/3;
    }
    printf("_____________________\n");
    for(x=0;x<5;++x){
        if(aluno[x].media>=6){
            printf("O aluno %s teve media de %.1f\n",aluno[x].nome,aluno[x].media);
        }
    }

    return 0;
}
