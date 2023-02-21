/*
Algoritmos - AULA 1 - Prof. Salvador Alves

3) Desenvolva um código que:
• cria uma variável para armazenar a altura da personalidade da internet que você
mais segue;
• atribua um valor a essa variável;
• mostra na tela uma frase com a altura dessa personalidade.

Professor: Salvador Alves Melo
Aluno: Lucas da Silva Barbosa
Curso: Análise e Desenvolvimento de Sistemas
Instituição: UniProjeção
*/
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
    float altura;

    srand(time(NULL));
    altura = rand() % 100;
    altura = altura / 10;

    while(altura < 1.50 || altura > 2.20){
        altura = rand() % 100;
        altura = altura / 10;
    }

    printf("A personalidade da Internet que eu mais sigo possui %0.2f de altura\n",altura);
    system("pause");
    return 0;
}
