#include <stdio.h>

int main(){
   int idade ;    // numeros inteiros
   float altura ;  //numero decimal
   char opcao ; // armazena caracteres
   char nome[20] ; //o tamanho do nome tem 20 caracteres
    // sintaxe scanf
    // scanf("formato1" "formato2", &variavel1, variavel2, ...);
    printf("Digite a sua idade: ");
    scanf("%d", &idade); // colocar & para leitura do arquivo
    printf("A idade é: %d\n", idade);

    printf("Digite a sua altura:");
    scanf("%f", &altura);
    printf("A altura é: %.2f\n", altura);

    printf("Digite a opcao: ");
    scanf(" %c", &opcao); // n precisa por & / dar um espaço antes do %c para leitura do caracter
    printf("A opção dele é:  %c\n", opcao);  // LIMITADO A 1 PALAVRA SÓ
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