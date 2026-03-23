#include <stdio.h>

int main(){
   int idade = 25;    // numeros inteiros
   float altura = 1.75;  //numero decimal
   char opcao = 'S'; // armazena caracteres
   char nome[20] = "sergio"; //o tamanho do nome tem 20 caracteres
     
    //printf("A idade do %s e: %d\n", nome, idade);
    printf("A idade e: %d\n", idade);
    printf("O nome é: %s\n", nome);
    printf("A altura e: %.2f\n!", altura ); // .2 limita a 2 casas decimais
    printf("A opcao e: %c\n" , opcao);
}

/*
printf("%formato1 %formato2 %formato3", variavel1, variavel2, variavel3)

%d: Imprime um inteiro no formato decimal.
%i: Equivalente a %d.
%f: Imprime um número de ponto flutuante no formato padrão.
%e: Imprime um número de ponto flutuante na notação científica.
%c: Imprime um único caractere.
%s: Imprime uma cadeia (string) de caracteres.
*/