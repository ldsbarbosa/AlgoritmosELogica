/*
Algoritmos - Lista de Exerc�cios 3 � La�os de Repeti��o - Prof. Salvador Alves

Mostra os n�meros primos de 1 a 50.
    Um n�mero primo � aquele que s� � divis�vel por 1 e por ele mesmo. (Dica: use % e um contador para saber por quantos n�meros o numero 38, por exemplo, � divis�vel).

Professor: Salvador Alves Melo
Aluno: Lucas da Silva Barbosa
Curso: An�lise e Desenvolvimento de Sistemas
Institui��o: UniProje��o
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
