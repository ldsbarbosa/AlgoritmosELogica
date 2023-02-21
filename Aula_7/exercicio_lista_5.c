/*
Algoritmos - Lista de Exercícios 3 – Laços de Repetição - Prof. Salvador Alves

Cria um jogo de adivinhação. Primeiro é gerado um número aleatório (entre 0 e 9),
que não é mostrado ao usuário (pelo menos inicialmente), depois o usuário terá 5 chances (por exemplo) de acertar o número. Os resultados possíveis serão os seguintes:
- Se o palpite apresentado baixo, o programa deve informar: TENTE UM NÚMERO MAIOR.
- Se o palpite for alto, o programa deve informar: TENTE UM NÚMERO MENOR.
- Se for exato deve informar: PARABÉNS!!! ADVINHOU!!!
- Se ultrapassar as 5 tentativas, o programa deve informar: VOCÊ PERDEU!!!!

Professor: Salvador Alves Melo
Aluno: Lucas da Silva Barbosa
Curso: Análise e Desenvolvimento de Sistemas
Instituição: UniProjeção
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
