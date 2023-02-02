#include <stdio.h>
#include <stdlib.h>

int escolhaSuaMao(int player) {
                    do {
                    printf("ESCOLHA SUA MÃO: \n");
                    printf("\n(1)PEDRA\n(2)PAPEL\n(3)TESOURA\n");
                    scanf("%i", &player);
                    } while (player > 3 || player < 1);

    return player;
}

int main() {
            int player1;
            int player2;
            
            printf("JOGADOR 1 ESCOLHA A SUA MÃO: \n");
            player1 = escolhaSuaMao(player1);
            printf("JOGADOR 2 ESCOLHA A SUA MÃO \n");
            player2 = escolhaSuaMao(player2);

            printf("jogador 1 escolheu %i\njogador 2 escolheu: %i", player1, player2);

            if (player1 == player2) {
             printf("empate!");
            }
            else if (player1 == 1 && player2 == 2) { //PEDRA VS PAPEL
                printf("\nO JOGADOR 2 GANHOU COM PAPEL");
            } else if (player1 == 1 && player2 == 3) { //PEDRA VS TESOURA
                printf("\nO JOGADOR 1 GANHOU COM PEDRA");
            } else if (player1 == 2 && player2 == 1) { //PAPEL VS PEDRA
                printf("\nO JOGADOR 1 GANHOU COM PAPEL");
            } else if (player1 == 2 && player2 == 3) { //PAPEL VS TESOURA
                printf("\nO JOGADOR 2 GANHOU COM TESOURA");
            } else if (player1 == 3 && player2 == 1) { //TESOURA VS PEDRA
                printf("\nO JOGADOR 2 GANHOU COM PEDRA");
            } else if (player1 == 3 && player2 == 2) { //TESOURA VS PAPEL
                printf("\nO JOGADOR 1 GANHOU COM TESOURA");
            }
            
            return 0;
}

