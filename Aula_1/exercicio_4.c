/*
Algoritmos - AULA 1 - Prof. Salvador Alves

4) Desenvolva um código que:
• cria uma variável para armazenar o nome de um parente;
• ao criar, inicializa essa variável com o nome da pessoa mais chata da sua família;
• mostra na tela uma frase com o nome desse parente.

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
    char nome_do_parente[10] = "Alberto";

    printf("Sou fa do %s\n",nome_do_parente);
    system("pause");
    return 0;
}
