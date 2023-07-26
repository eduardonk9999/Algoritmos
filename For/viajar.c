#include <stdio.h>

int main() {
    int assentos[30];

    for(int i = 0; i < 30; i++) {
       assentos[i] = 0;
     
    }

    int assentoEscolhido;

    printf("Digite o numero do assento desejado (1 a 30): ");
    scanf("%d", &assentoEscolhido);


    // Verificar se o assento escolhido é válido (entre 1 e 30)
    if(assentoEscolhido >= 1 && assentoEscolhido <= 30) {
         // Verificar se o assento escolhido está vazio
         if(assentos[assentoEscolhido - 1] == 0) {
            assentos[assentoEscolhido - 1] = 1;
             printf("Assento %d reservado com sucesso.\n", assentoEscolhido);
         } else {
            printf("O assento %d ja esta ocupado.\n", assentoEscolhido);
         }
    }  else {
        printf("Assento invalido. Insira um numero de assento valido (1 a 30).\n");
    }

    return 0;
}

