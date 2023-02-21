/*
Algoritmos AULA 6 - Prof. Salvador Alves

Leia o nome e as quatro notas de um aluno durante o semestre, e depois calcule a média aritmética dessas notas.
Se a média for maior ou igual a (seis) o aluno será aprovado. Se a média for menor que seis o programa deverá ler a nota do exame final
e calcular a nova média, da seguinte forma: Média Final = (Média+Exame Final)/2.
Nesse caso, para ser aprovado a média final deverá ser maior ou igual a cinco.

Professor: Salvador Alves Melo
Aluno: Lucas da Silva Barbosa
Curso: Análise e Desenvolvimento de Sistemas
Instituição: UniProjeção
*/
#include<stdio.h>
#include<stdlib.h>
int main( )
{
    char nome[20];
    float nota1;
    float nota2;
    float nota3;
    float nota4;
    float mediaNota;
    float mediaFinal;
    float exame;

    printf("Digite o nome do aluno\n");
    gets(nome);
    printf("Digite a primeira nota\n");
    scanf("%f",&nota1);
    printf("Digite a segunda nota\n");
    scanf("%f",&nota2);
    printf("Digite a terceira nota\n");
    scanf("%f",&nota3);
    printf("Digite a quarta nota\n");
    scanf("%f",&nota4);

    mediaNota = (nota1+nota2+nota3+nota4)/4;

    if(mediaNota >= 6)
        printf("O aluno foi aprovado!\n");
    else
    {
    if(mediaNota < 6){
        printf("A nota do aluno foi %.1f .\n",mediaNota);
        printf("Qual a nota que o aluno %s tirou no exame?\n",nome);
        scanf("%f",&exame);
        mediaFinal = (mediaNota+exame)/2;
        if(mediaFinal >= 5)
            printf("O aluno %s passou de ano com a nota do exame, que foi %.1f!\n",nome,mediaFinal);
        else
            printf("O aluno %s foi reprovado!\n",nome);
            }
    }
system("pause");
return
(0);
}
