#include <stdio.h>

// Desafio Batalha Naval - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de Batalha Naval.
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Nível Novato - Posicionamento dos Navios
    // Sugestão: Declare uma matriz bidimensional para representar o tabuleiro (Ex: int tabuleiro[5][5];).
    // Sugestão: Posicione dois navios no tabuleiro, um verticalmente e outro horizontalmente.
    // Sugestão: Utilize `printf` para exibir as coordenadas de cada parte dos navios.

    printf("Desafio Batalha Naval - MateCheck\n");
        printf("Tabuleiro de Batalha Naval\n");

    //Letra das Colunas
    char colunas [10] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'};

    //Inicializa tabuleiro com 0 (mar)
    int tabuleiro [10][10] = {0};

    //Posicionar navio horizontal (3 partes) na linha 2 (Índice 1), colunas B a D (Índices 1 a 3)
    for(int i = 1; i <= 3; i++) {
        tabuleiro[1][i] = 3;
    }

    //Posicionar novo navio vertical (3 partes) na coluna H (Índice 7), linhas 5 a 7 (Índice 4 a 6) 
    for(int i = 4; i <= 6; i++) {
        tabuleiro[i][7] = 3;
    }

    //Posicionar novo navio diagonal (3 partes) na linha 5, 6, 7 (ìndice 4, 5, 6), coluna B, C, D (ìndice 1, 2, 3)
    for(int i = 0; i <= 2; i++) {
        tabuleiro[4 + i][1 + i] = 3;
    }

    //Posicionar novo navio diagonal (3 partes) na linha 1, 2, 3 (Índice 0, 1, 2), coluna G, H, I (Índice 6, 7, 8)
    for(int i = 0; i <= 2; i++) {
        tabuleiro[0 + i][6 + i] = 3;
    }

    //Exibir cabeçalho com letras das Colunas
    printf("   ");
    for(int i = 0; i < 10; i++) {
        printf(" %c", colunas[i]);
    }
    printf("\n");

    //Exibir tabuleiro com números das linhas
    for(int i = 0; i < 10; i++) {
        printf("%2d ", i + 1); //Números de 1 a 10
        for(int j = 0; j < 10; j++) {
            printf(" %d", tabuleiro[i][j]);
        }
        printf("\n");
    }

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

    return 0;
}
