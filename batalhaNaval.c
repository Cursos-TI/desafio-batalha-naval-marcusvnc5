#include <stdio.h>

#define TAM 7

    // Nível Novato - Posicionamento dos Navios
    // Sugestão: Declare uma matriz bidimensional para representar o tabuleiro (Ex: int tabuleiro[5][5];).
    // Sugestão: Posicione dois navios no tabuleiro, um verticalmente e outro horizontalmente.
    // Sugestão: Utilize `printf` para exibir as coordenadas de cada parte dos navios.

int main(){

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

    printf("\n");

    int cone[TAM][TAM] = {0};
    int centro = TAM / 2;

    // Preencher o cone com topo em cima e base expandindo para baixo
    for (int i = 0; i < TAM; i++) {
        for (int j = 0; j < TAM; j++) {
            if (j >= centro - i && j <= centro + i) {
                cone[i][j] = 1;
            }
        }
    }

    printf("Habilidade em CONE:\n");
    for (int i = 0; i < TAM; i++) {
        for (int j = 0; j < TAM; j++) {
            printf("%d ", cone[i][j]);
        }
        printf("\n");
    }

    printf("\n");

    int cruz[TAM][TAM] = {0};

    // Preencher cruz com origem no centro
    for (int i = 0; i < TAM; i++) {
        for (int j = 0; j < TAM; j++) {
            if (i == centro || j == centro) {
                cruz[i][j] = 1;
            }
        }
    }

    printf("\nHabilidade em CRUZ:\n");
    for (int i = 0; i < TAM; i++) {
        for (int j = 0; j < TAM; j++) {
            printf("%d ", cruz[i][j]);
        }
        printf("\n");
    }

    printf("\n");

    int losango[TAM][TAM] = {0};


    // Preencher losango com origem no centro
    for (int i = 0; i < TAM; i++) {
        for (int j = 0; j < TAM; j++) {
            int dist_i = (i >= centro) ? i - centro : centro - i;
            int dist_j = (j >= centro) ? j - centro : centro - j;

            if ((dist_i + dist_j) <= centro) {
                losango[i][j] = 1;
            }
        }
    }

    printf("Habilidade em LOSANGO:\n");
    for (int i = 0; i < TAM; i++) {
        for (int j = 0; j < TAM; j++) {
            printf("%d ", losango[i][j]);
        }
        printf("\n");
    }

    return 0;
}