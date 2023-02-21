/*
Algoritmos AULA 4 - Prof. Salvador Alves

Leia o nome e quatro notas de um aluno durante o semestre, calcula a média aritmética dessas notas, e informa se o aluno foi aprovado ou reprovado.
A média para aprovação é 6.0 (seis).

Professor: Salvador Alves Melo
Aluno: Lucas da Silva Barbosa
Curso: Análise e Desenvolvimento de Sistemas
Instituição: UniProjeção
*/
#include<stdio.h>
#include<stdlib.h>
int main( )
{
    char aluno[15];
    float n1,n2,n3,n4;
    printf("Por favor, escreva o nome do aluno e pressione na tecla enter\n");
    scanf("%s",&aluno);
    printf("Por favor, escreva as notas das provas e pressione na tecla enter\n");
    scanf("%f%f%f%f",&n1,&n2,&n3,&n4);
    float media=(n1+n2+n3+n4)/ 4;
    if(media >= 6.0){
        printf("A media do aluno aprovado %s e %f\n",aluno,media);}
    else{
        printf("A media do aluno REPROVADO %s e %f\n",aluno,media);}
    system("pause");
    return 0;
}
