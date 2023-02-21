/*
Algoritmos - Lista de Exerc�cios 3 � La�os de Repeti��o - Prof. Salvador Alves

Cria um jogo de adivinha��o. Primeiro � gerado um n�mero aleat�rio (entre 0 e 9),
que n�o � mostrado ao usu�rio (pelo menos inicialmente), depois o usu�rio ter� 5 chances (por exemplo) de acertar o n�mero. Os resultados poss�veis ser�o os seguintes:
- Se o palpite apresentado baixo, o programa deve informar: TENTE UM N�MERO MAIOR.
- Se o palpite for alto, o programa deve informar: TENTE UM N�MERO MENOR.
- Se for exato deve informar: PARAB�NS!!! ADVINHOU!!!
- Se ultrapassar as 5 tentativas, o programa deve informar: VOC� PERDEU!!!!

Professor: Salvador Alves Melo
Aluno: Lucas da Silva Barbosa
Curso: An�lise e Desenvolvimento de Sistemas
Institui��o: UniProje��o
*/

#include <stdio.h>
#include <time.h>

int main()
{
    int numeroAleatorio,numeroAdivinhe,contador;

    srand(time(NULL));
    numeroAleatorio = rand()%10;

    printf("--JOGO DE ADIVINHACAO--\n");
    printf("Foi gerado um numero de 0 a 9. Voce possui 5 chances. Adivinhe o numero!\n");

    for(contador=1;contador<=7;contador++){
        scanf("%d",&numeroAdivinhe);
        if(numeroAdivinhe < numeroAleatorio){
            printf("Escreva um numero maior\n");
        }else{
            if(numeroAdivinhe > numeroAleatorio){
                printf("Escreva um numero menor\n");
            }else{
                printf("Acertou!\n");
                break;
            }
        }
        if(contador>5){
            printf("As suas tentativas foram esgotadas. Tente novamente.");
            break;
        }
    }

    return 0;
}
