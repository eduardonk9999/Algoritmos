#include <stdio.h>
#include <ctype.h>

#define TAMANHO_MAX 100

int main() {
    char nome[TAMANHO_MAX];
    printf("Digite seu nome: ");
    scanf("%s", nome);
    printf("Nome digitado: %s\n", nome);
    char letraMinuscula = tolower(nome);
    
    printf("Convertido", letraMinuscula);
    return 0;
}
