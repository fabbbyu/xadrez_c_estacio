#include <stdio.h>

int main() {

    /*
        Movimento do Cavalo no xadrez
        O cavalo se move:
        - duas casas para baixo
        - uma casa para a esquerda

        Este exemplo usa loops aninhados:
        - for (movimento vertical)
        - while (movimento horizontal)
    */

    int casasBaixo = 2;
    int casasEsquerda = 1;

    printf("Movimento do Cavalo:\n\n");

    // Loop externo (FOR) → movimento para baixo
    for (int i = 0; i < casasBaixo; i++) {
        printf("Baixo\n");
    }

    // Loop interno (WHILE) → movimento para a esquerda
    int j = 0;
    while (j < casasEsquerda) {
        printf("Esquerda\n");
        j++;
    }

    return 0;
}
