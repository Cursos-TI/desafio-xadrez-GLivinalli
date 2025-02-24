#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
    int qnt_mov, escolha_peca, i;
    char mov_pc[50];
    char* peca;

    printf("Escolha a peça!\nBispo.\nTorre.\nRainha.\n");
    scanf("%d", &escolha_peca);

    switch (escolha_peca)
    {
    case 1:
        peca = "Bispo";
        printf("Escolha qual direção do Bispo!\n1-Diagonal,Esquerda\n2-Diagonal,Direita\n\n");
        scanf("%s", mov_pc);
        printf("Quantidade de movimentação!\n");
        scanf("%d", &qnt_mov);
        break;

    case 2:
        peca = "Torre";
        printf("Escolha qual direção da Torre!\nCima\nBaixo\n\n");
        scanf("%s", mov_pc);
        printf("Quantidade de movimentação!\n");
        scanf("%d", &qnt_mov);
        break;

    case 3:
        peca = "Rainha";
        printf("Escolha qual direção da Rainha!\nCima\nBaixo\n\n");
        scanf("%s", mov_pc);
        printf("Quantidade de movimentação!\n");
        scanf("%d", &qnt_mov);
    default:
        printf("Escolha entre as três opções!");
        break;
    }

        
    for (i = 0; i <= (qnt_mov-1); i++)
    {
        if(escolha_peca == 1){
            printf("%s foi uma casa para %s!\n", peca, mov_pc);
        }
    }


    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.

    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.

    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.

    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.


    return 0;
}
