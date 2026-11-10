//Criar um programa que calcula a media das notas de dois alunos ao memso tempo.
//1 Ana e 2 Beto
//Entregar no Teams
//Informe a média e a situação (aprovado ou reprovado).
//Considere a média mínima para aprovação igual a 6,0.


#include <stdio.h>

int main() {
    float media, soma;
    float nota1Ana = 9.0; 
    float nota2Ana = 8.5; 
    float nota1Beto = 7.0; 
    float nota2Beto = 6.5; 

    soma = nota1Ana + nota2Ana;
    media = soma / 2;

    printf("Media Ana: %.2f\n", media);
    printf("Situacao Ana: %s\n", media >= 6.0 ? "Aprovado" : "Reprovado");

    soma = nota1Beto + nota2Beto;
    media = soma / 2;

    printf("Media Beto: %.2f\n", media);
    printf("Situacao Beto: %s\n", media >= 6.0 ? "Aprovado" : "Reprovado");

    return 0;
}
    