#include <stdio.h>

int main() {

    char linha [10] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'};
    //Criando o Tabuleiro do jogo Batalha Naval

    int tabuleiro[10][10];
    // Inicializando o tabuleiro com 0
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            tabuleiro[i][j] = 0;
        }
   };
    
        // Adicionando os navios no tabuleiro
        tabuleiro[0][0] = 3; // Navio 1
        tabuleiro[1][0] = 3; // Navio 1
        tabuleiro[2][0] = 3; // Navio 1
        tabuleiro[7][5] = 3; // Navio 2
        tabuleiro[7][6] = 3; // Navio 2
        tabuleiro[7][7] = 3; // Navio 2
    
        // Exibindo o tabuleiro
        printf("  0 1 2 3 4 5 6 7 8 9\n");
        for (int i = 0; i < 10; i++) {
            printf("%c ", linha[i]);
            for (int j = 0; j < 10; j++) {
                printf("%d ", tabuleiro[i][j]);
            }
            printf("\n");
        }
    
        return 0;
    }