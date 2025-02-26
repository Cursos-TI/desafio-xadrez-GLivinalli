#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.
int main() {
    // Inicializando as variaveis
    int qnt_mov, escolha_peca, i;
    char mov_pc[50];
    char mov_pcx[10];
    char* peca;

    // Recolhendo info
    printf("Escolha a peça!\n(1)Bispo.\n(2)Torre.\n(3)Rainha.\n(4)Cavalo\n");
    scanf("%d", &escolha_peca);

    //Bloco de escolha
    switch (escolha_peca)
    {
    case 1:
        peca = "Bispo";
        printf("Escolha qual direção do Bispo!\n --EXEMPLO 'Diagonal Direita'\n\n");
        scanf("%s %s", mov_pc, mov_pcx);
        printf("Quantidade de movimentação!\n");
        scanf("%d", &qnt_mov);
        break;

    case 2:
        peca = "Torre";
        printf("Escolha qual direção da Torre!\n --EXEMPLO 'Direita'\n\n");
        scanf("%s", mov_pc);
        printf("Quantidade de movimentação!\n");
        scanf("%d", &qnt_mov);
        break;

    case 3:
        peca = "Rainha";
        printf("Escolha qual direção da Rainha!\n --EXEMPLO 'Diagonal Direita'\n\n");
        scanf("%s", mov_pc);
        printf("Quantidade de movimentação!\n");
        scanf("%d", &qnt_mov);
        break;
            
    case 4:
        peca = "Cavalo";
        printf("Escolha qual direção do Cavalo!\n --EXEMPLO 'Cima Direita'\n\n");
        scanf("%s %s", mov_pc, mov_pcx);
        int mov_x = 3;
        int mov_y = 2;

        //Inicializando zerado
        int x = 0;
        int y = 0;

        //loop para movimentar o cavalo 
        for (x; x < mov_x; x++)
        {
            while(y < mov_y){
                        //DIRECAO
                printf("%s: %s. \n", peca, mov_pc);
                y++;
                    }
                    //DIRECAO
            printf("%s: %s.\n", peca, mov_pcx);
        break;
        }
    }
    //Exibir os as direções da peça feita.
    for (i = 0; i <= (qnt_mov-1); i++)
    {
        if(escolha_peca <= 4){
            printf("%s, %s!. %s\n", peca, mov_pc, mov_pcx);
        }
    }
    return 0;
}