#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
    // Cavalo
    int mov_x = 3;
    int mov_y = 2;
    char direcao_CIMA[10] = "Cima\n";
    char direcao_BAIXO[10] = "Baixo\n";
    char direcao_DIREITA[10] = "Direita\n";
    char direcao_ESQUERDA[10] = "Esquerda\n";
    //INICIO DA PECA
    int linha = 1;
    int y = 1;
    char coluna = 'b';
    for (linha; linha < mov_x; linha++){
        while(y < mov_y o){
            //DIRECAO
            printf("%s\n", direcao_DIREITA);
            coluna++;
            y++;
        }
        //DIRECAO
        printf("%s\n", direcao_CIMA);
    }
    printf("Linha %d\nColuna %c\n", linha, coluna);
}   
