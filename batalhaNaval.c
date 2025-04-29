// Desafio Batalha Naval
// Este código inicial serve como base para o desenvolvimento do sistema de Batalha Naval.
// Siga os comentários para implementar cada parte do desafio.


    // Nível Mestre - Habilidades Especiais com Matrizes
    // Sugestão: Crie matrizes para representar habilidades especiais como cone, cruz, e octaedro.
    // Sugestão: Utilize estruturas de repetição aninhadas para preencher as áreas afetadas por essas habilidades no tabuleiro.
    // Sugestão: Exiba o tabuleiro com as áreas afetadas, utilizando 0 para áreas não afetadas e 1 para áreas atingidas.

    // Exemplos de exibição das habilidades:
    // Exemplo para habilidade em cone:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 1 1 1 1 1
    
    // Exemplo para habilidade em octaedro:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 0 0 1 0 0

    // Exemplo para habilidade em cruz:
    // 0 0 1 0 0
    // 1 1 1 1 1
    // 0 0 1 0 0

    #include <stdio.h>

    // Desafio Batalha Naval - Nível Aventureiro
    
    int main() {
        // Declarando o tabuleiro 10x10 e inicializando todas as posições com 0 (água)
        int tabuleiro[10][10];
    
        // Inicializa o tabuleiro com água (0)
        for (int linha = 0; linha < 10; linha++) {
            for (int coluna = 0; coluna < 10; coluna++) {
                tabuleiro[linha][coluna] = 0;
            }
        }
    
        // Definindo os navios (tamanho 3) usando vetores
        int navioHorizontal[3] = {3, 3, 3};
        int navioVertical[3] = {3, 3, 3};
        int navioDiagonalPrincipal[3] = {3, 3, 3}; // Linha e coluna aumentam juntos
        int navioDiagonalSecundaria[3] = {3, 3, 3}; // Linha aumenta, coluna diminui
    
        // Definindo as coordenadas iniciais dos navios
        int linhaHorizontal = 0;
        int colunaHorizontal = 2;
    
        int linhaVertical = 4;
        int colunaVertical = 6;
    
        int linhaDiagonalPrincipal = 6;
        int colunaDiagonalPrincipal = 0;
    
        int linhaDiagonalSecundaria = 2;
        int colunaDiagonalSecundaria = 8;
    
        // Posicionando o navio horizontal
        for (int i = 0; i < 3; i++) {
            // Verifica se a posição está livre antes de posicionar
            if (tabuleiro[linhaHorizontal][colunaHorizontal + i] == 0) {
                tabuleiro[linhaHorizontal][colunaHorizontal + i] = navioHorizontal[i];
            }
        }
    
        // Posicionando o navio vertical
        for (int i = 0; i < 3; i++) {
            if (tabuleiro[linhaVertical + i][colunaVertical] == 0) {
                tabuleiro[linhaVertical + i][colunaVertical] = navioVertical[i];
            }
        }
    
        // Posicionando o navio na diagonal principal 
        for (int i = 0; i < 3; i++) {
            if (tabuleiro[linhaDiagonalPrincipal + i][colunaDiagonalPrincipal + i] == 0) {
                tabuleiro[linhaDiagonalPrincipal + i][colunaDiagonalPrincipal + i] = navioDiagonalPrincipal[i];
            }
        }
    
        // Posicionando o navio na diagonal secundária
        for (int i = 0; i < 3; i++) {
            if (tabuleiro[linhaDiagonalSecundaria + i][colunaDiagonalSecundaria - i] == 0) {
                tabuleiro[linhaDiagonalSecundaria + i][colunaDiagonalSecundaria - i] = navioDiagonalSecundaria[i];
            }
        }
    
        // Exibindo o tabuleiro 
        printf("Tabuleiro de Batalha Naval - Nível Aventureiro:\n\n");
        for (int linha = 0; linha < 10; linha++) {
            for (int coluna = 0; coluna < 10; coluna++) {
                printf("%d ", tabuleiro[linha][coluna]);
            }
            printf("\n"); // Nova linha após cada linha do tabuleiro
        }
    
        return 0;
    }
