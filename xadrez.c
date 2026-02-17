#include <stdio.h>

/*
    Funções recursivas para Torre, Bispo e Rainha.
    Cada chamada representa o movimento de uma casa.
*/

/* TORRE */
void moverTorre(int casas) {
    if (casas == 0)
        return;

    printf("Direita\n");
    moverTorre(casas - 1);
}

/* RAINHA */
void moverRainha(int casas) {
    if (casas == 0)
        return;

    printf("Cima\n");
    moverRainha(casas - 1);
}

/*
    BISPO
    Usa recursividade + loops aninhados.
*/
void moverBispo(int casas) {
    if (casas == 0)
        return;

    for (int v = 0; v < 1; v++) {       // movimento vertical
        for (int h = 0; h < 1; h++) {   // movimento horizontal
            printf("Cima\n");
            printf("Direita\n");
        }
    }

    moverBispo(casas - 1);
}

int main() {

    int casasTorre = 3;
    int casasBispo = 2;
    int casasRainha = 4;

    printf("Movimento da Torre:\n");
    moverTorre(casasTorre);

    printf("\nMovimento do Bispo:\n");
    moverBispo(casasBispo);

    printf("\nMovimento da Rainha:\n");
    moverRainha(casasRainha);

    /*
        Movimento do Cavalo usando loops aninhados
        Duas casas para cima e uma para a direita
    */

    printf("\nMovimento do Cavalo:\n");

    for (int i = 0; i < 3; i++) {

        if (i < 2) {
            printf("Cima\n");
            continue;
        }

        printf("Direita\n");
        break;
    }

    return 0;
}
