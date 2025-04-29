// Desafio Batalha Naval - nível mestre
 
    #include <stdio.h>

    // Implementação das habilidades especiais (cone, cruz e octaedro)
    
    int main() {
        // Definição do tabuleiro 10x10
        int tabuleiro[10][10] = {0};
    
        // Definição dos navios 
        tabuleiro[2][2] = 3;
        tabuleiro[2][3] = 3;
        tabuleiro[2][4] = 3;
        tabuleiro[5][5] = 3;
        tabuleiro[6][5] = 3;
        tabuleiro[7][5] = 3;
        tabuleiro[8][2] = 3;
        tabuleiro[7][3] = 3;
        tabuleiro[6][4] = 3;
        tabuleiro[0][7] = 3;
        tabuleiro[1][6] = 3;
        tabuleiro[2][5] = 3;
    
        // Matrizes das habilidade 5x5
        int cone[5][5] = {0};
        int cruz[5][5] = {0};
        int octaedro[5][5] = {0};
    
        // Preenchendo o Cone
        for (int i = 0; i < 5; i++) { // linhas
            for (int j = 0; j < 5; j++) { // colunas
                if (j >= 2 - i && j <= 2 + i) {
                    cone[i][j] = 1;
                }
            }
        }
    
        // Preenchendo a Cruz
        for (int i = 0; i < 5; i++) { // linhas
            for (int j = 0; j < 5; j++) { // colunas
                if (i == 2 || j == 2) {
                    cruz[i][j] = 1;
                }
            }
        }
    
        // Preenchendo o Octaedro
        for (int i = 0; i < 5; i++) { // linhas
            for (int j = 0; j < 5; j++) { // colunas
                int di = (i > 2) ? (i - 2) : (2 - i); // distância vertical ao centro
                int dj = (j > 2) ? (j - 2) : (2 - j); // distância horizontal ao centro
                if (di + dj <= 2) {
                    octaedro[i][j] = 1;
                }
            }
        }
    
        // Definição das posições de origem para as habilidades
        int origem_cone_linha = 0, origem_cone_coluna = 0;
        int origem_cruz_linha = 5, origem_cruz_coluna = 5;
        int origem_octaedro_linha = 7, origem_octaedro_coluna = 2;
    
        // Aplicando o Cone
        for (int i = 0; i < 5; i++) {
            for (int j = 0; j < 5; j++) {
                int linha = origem_cone_linha + i;
                int coluna = origem_cone_coluna + j;
                if (linha >= 0 && linha < 10 && coluna >= 0 && coluna < 10) {
                    if (cone[i][j] == 1 && tabuleiro[linha][coluna] == 0) {
                        tabuleiro[linha][coluna] = 5;
                    }
                }
            }
        }
    
        // Aplicando a Cruz
        for (int i = 0; i < 5; i++) {
            for (int j = 0; j < 5; j++) {
                int linha = origem_cruz_linha - 2 + i;
                int coluna = origem_cruz_coluna - 2 + j;
                if (linha >= 0 && linha < 10 && coluna >= 0 && coluna < 10) {
                    if (cruz[i][j] == 1 && tabuleiro[linha][coluna] == 0) {
                        tabuleiro[linha][coluna] = 5;
                    }
                }
            }
        }
    
        // Aplicando o Octaedro
        for (int i = 0; i < 5; i++) {
            for (int j = 0; j < 5; j++) {
                int linha = origem_octaedro_linha - 2 + i;
                int coluna = origem_octaedro_coluna - 2 + j;
                if (linha >= 0 && linha < 10 && coluna >= 0 && coluna < 10) {
                    if (octaedro[i][j] == 1 && tabuleiro[linha][coluna] == 0) {
                        tabuleiro[linha][coluna] = 5;
                    }
                }
            }
        }
    
        // Exibição do resultado
        printf("Batalha Naval:\n");
        for (int i = 0; i < 10; i++) {
            for (int j = 0; j < 10; j++) {
                printf("%d ", tabuleiro[i][j]);
            }
            printf("\n");
        }
    
        return 0;
    }    