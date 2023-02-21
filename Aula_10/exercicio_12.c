/*
Algoritmos - AULA 10 - Prof. Salvador Alves

Desenvolva um algoritmo que valida o número de um CPF qualquer.
O CPF é composto por onze algarismos, onde os dois últimos são chamados de dígitos verificadores,
ou seja, os dois últimos dígitos são criados a partir dos nove primeiros.
O cálculo é feito em duas etapas utilizando o módulo de divisão 11.

Link de apoio: http://clubes.obmep.org.br/blog/a-matematica-nos-documentos-cpf/#:~:text=Particularmente%2C%20no%20caso%20do%20CPF,9%2C%20e%20assim%20sucessivamente).

Professor: Salvador Alves Melo
Aluno: Lucas da Silva Barbosa
Curso: Análise e Desenvolvimento de Sistemas
Instituição: UniProjeção
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    //Declaração de variaveis
    int cpf1[11],cpf2[11];
    int indice,peso,somatorio,divisao,resto;

    //Inserção de CPF
    printf("Insira um CPF valido\n");
    for(indice=0;indice<11;indice++){
    scanf("%d",&cpf1[indice]);}

    //Primeiro Dígito Verificador
    peso = 10;
    indice = 0;
    for(indice=0;indice<11;indice++){
        cpf2[indice]=cpf1[indice]*peso;
        somatorio=somatorio+cpf2[indice];
        peso--;
    }

    divisao=somatorio/11;
    resto=somatorio%11;
    if(resto<2){
        cpf1[9]=0;
    }else{
        cpf1[9]=11-resto;
    }

    //Verificacao das variaveis
    printf("Variavel somatorio = %d\n",somatorio);
    system("pause");
    printf("Variavel divisao = %d\n",divisao);
    system("pause");
    printf("Variavel resto = %d\n",resto);
    system("pause");
    printf("Variavel cpf[9] = %d\n",cpf1[9]);
    system("pause");

    //Segundo Dígito Verificador
    peso=11;
    indice=0;
    int cpf3[11];
    int somatorio2,divisao2,resto2;

    for(indice=0;indice<9;indice++){
        cpf3[indice]=cpf1[indice]*peso;
        somatorio2=somatorio2+cpf3[indice];
        peso--;
    }
    divisao2=somatorio2/11;
    resto2=somatorio2%11;
    if(resto2<2){
        cpf1[10]=0;
    }else{
        cpf1[10]=11-resto2;
    }

    for(indice=0;indice<11;indice++){
        printf("%d",cpf1[indice]);
    }

    return 0;
}
