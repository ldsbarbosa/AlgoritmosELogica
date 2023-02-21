/*
Algoritmos - Lista de Exercícios 3 – Laços de Repetição - Prof. Salvador Alves

Mostra os números primos de 1 a 50.
    Um número primo é aquele que só é divisível por 1 e por ele mesmo. (Dica: use % e um contador para saber por quantos números o numero 38, por exemplo, é divisível).

Professor: Salvador Alves Melo
Aluno: Lucas da Silva Barbosa
Curso: Análise e Desenvolvimento de Sistemas
Instituição: UniProjeção
*/

#include <stdio.h>
#include <time.h>

int main()
{
    int i, numeroInicial;

    printf("Mostrando numeros primos de 1 a 50.\n\n");

    for(numeroInicial = 1; numeroInicial <=50; numeroInicial++){
        for (i = 2; i <= numeroInicial; i++) {
            if(numeroInicial == 1 || numeroInicial == 2 || numeroInicial == 3){
                printf("[%i]\n",numeroInicial);
                break;
            }
            if (numeroInicial % i == 0) {
               break;
            }else{
                if(i == numeroInicial / 2){
                    printf("[%i]\n",numeroInicial);
                }
            }
         }
    }

    return 0;
}
