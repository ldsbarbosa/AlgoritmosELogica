/*
Algoritmos - AULA 1 - Prof. Salvador Alves

2) Desenvolva um código que:
• cria uma variável para armazenar a idade da pessoa que você mais gosta;
• atribui um valor a essa variável;
• mostra na tela uma frase com idade dessa pessoa.

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
    int idade;

    srand(time(NULL));
    idade = rand() % 100;
    while(idade < 10 || idade > 90){
        idade = rand() % 100;
    }

    printf("A pessoa o qual gosto possui %d anos de idade\n",idade);
    system("pause");
    return 0;
}
