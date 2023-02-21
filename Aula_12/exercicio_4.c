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
    struct notasAluno
        {
        char nome[20];
        float nota[3];
        float media;
        };
    struct notasAluno aluno[5];
    //Primeiro aluno - Entrada de Dados
    printf("Informe o nome do primeiro aluno.\n");
    scanf("%s",&aluno[0].nome);
    printf("Agora, informe as notas do primeiro aluno.\n");
    scanf("%f%f%f",&aluno[0].nota[0],&aluno[0].nota[1],&aluno[0].nota[2]);
    //Segundo aluno - Entrada de Dados
    printf("Informe o nome do segundo aluno.\n");
    scanf("%s",&aluno[1].nome);
    printf("Agora, informe as notas do segundo aluno.\n");
    scanf("%f%f%f",&aluno[1].nota[0],&aluno[1].nota[1],&aluno[1].nota[2]);
    //Terceiro aluno - Entrada de Dados
    printf("Informe o nome do terceiro aluno.\n");
    scanf("%s",&aluno[2].nome);
    printf("Agora, informe as notas do terceiro aluno.\n");
    scanf("%f%f%f",&aluno[2].nota[0],&aluno[2].nota[1],&aluno[2].nota[2]);
    //Quarto aluno - Entrada de Dados
    printf("Informe o nome do quarto aluno.\n");
    scanf("%s",&aluno[3].nome);
    printf("Agora, informe as notas do quarto aluno.\n");
    scanf("%f%f%f",&aluno[3].nota[0],&aluno[3].nota[1],&aluno[3].nota[2]);
    //Ultimo aluno - Entrada de Dados
    printf("Informe o nome do quinto aluno.\n");
    scanf("%s",&aluno[4].nome);
    printf("Agora, informe as notas do quinto aluno.\n");
    scanf("%f%f%f",&aluno[4].nota[0],&aluno[4].nota[1],&aluno[4].nota[2]);

    //Calculo das medias
    aluno[0].media = (aluno[0].nota[0]+aluno[0].nota[1]+aluno[0].nota[2])/3;
    aluno[1].media = (aluno[1].nota[0]+aluno[1].nota[1]+aluno[1].nota[2])/3;
    aluno[2].media = (aluno[2].nota[0]+aluno[2].nota[1]+aluno[2].nota[2])/3;
    aluno[3].media = (aluno[3].nota[0]+aluno[3].nota[1]+aluno[3].nota[2])/3;
    aluno[4].media = (aluno[4].nota[0]+aluno[4].nota[1]+aluno[4].nota[2])/3;


    printf("TABELA DE ALUNOS\n");
    printf("Nome \t Primeira Nota \t Segunda Nota \t Terceira Nota \t Media\n");
    //Primeiro aluno
    printf("%s \t %.2f \t %.2f \t %.2f \t",aluno[0].nome,aluno[0].nota[0],aluno[0].nota[1],aluno[0].nota[2]);
    if(aluno[0].media >= 6){
        printf("%.2f - O aluno foi aprovado!\n",aluno[0].media);
    }else{
        printf("%.2f - Infelizmente, o aluno foi reprovado.\n",aluno[0].media);
    }
    //Segundo aluno
    printf("%s \t %.2f \t %.2f \t %.2f \t",aluno[1].nome,aluno[1].nota[0],aluno[1].nota[1],aluno[1].nota[2]);
    if(aluno[1].media >= 6){
        printf("%.2f - O aluno foi aprovado!\n",aluno[1].media);
    }else{
        printf("%.2f - Infelizmente, o aluno foi reprovado.\n",aluno[1].media);
    }
    //Terceiro aluno
    printf("%s \t %.2f \t %.2f \t %.2f \t",aluno[2].nome,aluno[2].nota[0],aluno[2].nota[1],aluno[2].nota[2]);
    if(aluno[2].media >= 6){
        printf("%.2f - O aluno foi aprovado!\n",aluno[2].media);
    }else{
        printf("%.2f - Infelizmente, o aluno foi reprovado.\n",aluno[2].media);
    }
    //Quarto aluno
    printf("%s \t %.2f \t %.2f \t %.2f \t",aluno[3].nome,aluno[3].nota[0],aluno[3].nota[1],aluno[3].nota[2]);
    if(aluno[3].media >= 6){
        printf("%.2f - O aluno foi aprovado!\n",aluno[3].media);
    }else{
        printf("%.2f - Infelizmente, o aluno foi reprovado.\n",aluno[3].media);
    }
    //Ultimo aluno
    printf("%s \t %.2f \t %.2f \t %.2f \t",aluno[4].nome,aluno[4].nota[0],aluno[4].nota[1],aluno[4].nota[2]);
    if(aluno[3].media >= 6){
        printf("%.2f - O aluno foi aprovado!\n",aluno[4].media);
    }else{
        printf("%.2f - Infelizmente, o aluno foi reprovado.\n",aluno[4].media);
    }

    return 0;
}
