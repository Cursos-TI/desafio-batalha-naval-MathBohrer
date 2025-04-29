// Desafio Batalha Naval
// Este código inicial serve como base para o desenvolvimento do sistema de Batalha Naval.
// Siga os comentários para implementar cada parte do desafio.


    // Nível Novato - Posicionamento dos Navios
    // Sugestão: Declare uma matriz bidimensional para representar o tabuleiro (Ex: int tabuleiro[5][5];).
    // Sugestão: Posicione dois navios no tabuleiro, um verticalmente e outro horizontalmente.
    // Sugestão: Utilize `printf` para exibir as coordenadas de cada parte dos navios.

    // Nível Aventureiro - Expansão do Tabuleiro e Posicionamento Diagonal
    // Sugestão: Expanda o tabuleiro para uma matriz 10x10.
    // Sugestão: Posicione quatro navios no tabuleiro, incluindo dois na diagonal.
    // Sugestão: Exiba o tabuleiro completo no console, mostrando 0 para posições vazias e 3 para posições ocupadas.

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

    // Desafio Batalha Naval - Nível Novato
    // Este código posiciona dois navios em um tabuleiro 10x10, utilizando vetores e matriz.
    
    int main() {
        // Declarando o tabuleiro 10x10 e inicializando todas as posições com 0 (água)
        int tabuleiro[10][10];
    
        // Inicializa todo o tabuleiro com 0
        for (int linha = 0; linha < 10; linha++) {
            for (int coluna = 0; coluna < 10; coluna++) {
                tabuleiro[linha][coluna] = 0;
            }
        }
    
        // Definindo os navios (tamanho 3) usando vetores
        int navioHorizontal[3] = {3, 3, 3}; // Representa um navio horizontal
        int navioVertical[3] = {3, 3, 3};   // Representa um navio vertical
    
        // Definindo as coordenadas iniciais dos navios
        int linhaHorizontal = 2;
        int colunaHorizontal = 1;
    
        int linhaVertical = 5;
        int colunaVertical = 7;
    
        // Posicionando o navio horizontal no tabuleiro
        // O navio será colocado da esquerda para a direita
        for (int i = 0; i < 3; i++) {
            tabuleiro[linhaHorizontal][colunaHorizontal + i] = navioHorizontal[i];
        }
    
        // Posicionando o navio vertical no tabuleiro
        // O navio será colocado de cima para baixo
        for (int i = 0; i < 3; i++) {
            tabuleiro[linhaVertical + i][colunaVertical] = navioVertical[i];
        }
    
        // Exibindo o tabuleiro no console
        printf("Tabuleiro de Batalha Naval:\n\n");
        for (int linha = 0; linha < 10; linha++) {
            for (int coluna = 0; coluna < 10; coluna++) {
                printf("%d ", tabuleiro[linha][coluna]);
            }
            printf("\n"); // Nova linha após cada linha do tabuleiro
        }
    
        return 0;
    }    
