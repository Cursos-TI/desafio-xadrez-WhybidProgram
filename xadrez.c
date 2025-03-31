#include <stdio.h>

int main() {
    int torre, bispo = 0, rainha = 0;
    
    //estrutura para movimento da torre 5 casas para a direita
    for (torre = 0; torre < 5; torre++)
    {
        printf("Direita\n");
    }
    // estrutura para o movimento do bispo 5 casas na diagonal para a direita
    while (bispo < 5)
    {
        printf("Cima, Direita\n");
        bispo++;
    }

    //estrutura para o movimento da rainha 8 casas para a esquerda

    do
    {
        printf("Esquerda\n");
        rainha++;
    } while (rainha < 8);
    

    return 0;
}