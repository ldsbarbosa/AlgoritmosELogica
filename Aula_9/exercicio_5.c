/*
Algoritmos - AULA 9 - DO WHILE - Prof. Salvador Alves

Gere cinquenta números aleatórios utilizando os seguintes comandos:
    srand(time(NULL)); //inicializa a semente de geração do número aleatório.
    rand ( )%100//gera um número aleatório entre a e 99
Vai precisar também dessas bibliotecas (arquivos de cabeçalho):
    stdlib.h: para o system, o rand e o srand
    time.h: para o time (NULL)

Professor: Salvador Alves Melo
Aluno: Lucas da Silva Barbosa
Curso: Análise e Desenvolvimento de Sistemas
Instituição: UniProjeção
*/
#include <stdlib.h>
#include <stdio.h>
#include <time.h>
int main()
{
    int cont = 1;
    printf("Gerando 50 numeros aleatorios!\n");
    srand(time(NULL));

    do{
        printf("%d) %d\n",cont,rand()%100);
        cont++;
    }while(cont<=50);

    return 0;
}
