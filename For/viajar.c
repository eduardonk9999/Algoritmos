#include <stdio.h>

int main() {
    int assentos[30];

    for(int i = 0; i < 30; i++) {
       assentos[i] = i + 1;
       printf("%d", assentos[i]);
    }

    return 0;

}

// EM C, não da pra verificar se a posicao está preenchida,
// vamos precisar escrever na unha essa parte.