#include <stdio.h>

int main() {
    int torre, bispo = 0, rainha = 0, cavalo = 1;
    
    //estrutura para movimento da torre 5 casas para a direita
    for (torre = 0; torre < 5; torre++)
    {
        printf("Direita\n");
    }

    printf("\n");
    // estrutura para o movimento do bispo 5 casas na diagonal para a direita
    while (bispo < 5)
    {
        printf("Cima, Direita\n");
        bispo++;
    }

    printf("\n");
    //estrutura para o movimento da rainha 8 casas para a esquerda

    do
    {
        printf("Esquerda\n");
        rainha++;
    } while (rainha < 8);

    printf("\n");
    
    while (cavalo--)
    {
        for (int i = 0; i < 2; i++)
        {
            printf("Baixo\n");
        }
        printf("Esquerda");
        
    }
    