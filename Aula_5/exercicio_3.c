/*
Algoritmos AULA 5 - Prof. Salvador Alves

Leia um numero da conta, um n�mero de ag�ncia e a uma senha e verifique se as mesmas
s�o as mesmas armazenadas nas vari�veis de uma determinada conta de banco.

Professor: Salvador Alves Melo
Aluno: Lucas da Silva Barbosa
Curso: An�lise e Desenvolvimento de Sistemas
Institui��o: UniProje��o
*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main( )
{
    char numeCont[20];
    char numeAgen[20];
    char senha[20];
    char numeCont2[] = "12345";
    char numeAgen2[] = "1234";
    char senha2[] = "123";

    printf("Informe o numero da sua conta.\n");
    gets(numeCont);
    printf("Informe o o numero da sua agencia\n");
    gets(numeAgen);
    printf("Informe a sua senha.\n");
    gets(senha);

    int comparaCont = strcmp(numeCont,numeCont2);
    int comparaAgen = strcmp(numeAgen,numeAgen2);
    int comparaSenha = strcmp(senha,senha2);

    if (comparaCont == 0 && comparaAgen == 0 && comparaSenha == 0){
            printf("Bem vindo, usuario! Faca suas compras.\n");
        }
    else{
            printf("Tente novamente. Voc� errou algum dos campos.\n");
        }
    system("pause");
    return 0;
    }
