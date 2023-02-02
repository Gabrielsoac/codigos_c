#include <stdio.h>
#include <stdlib.h>

int main () {
                float notas[2][2] = {};
                float media;
                float total;

                printf("DIGITE O VALOR DAS NOTAS DOS ALUNOS: \n");

                printf("Digite a nota de Maria: \n");
                scanf("%f", &notas[0][0]);

                printf("Digite a nota de Joao: \n");
                scanf("%f", &notas[0][1]);

                printf("Digite a nota de Celia: \n");
                scanf("%f", &notas[1][0]);

                printf("Digite a nota de Roberto: \n");
                scanf("%f", &notas[1][1]);

                for (int i = 0; i < 2; i++) {
                    for (int x = 0; x < 2; x++)
                    {
                        total += notas[i][x];
                    }
                    media = total/4;
                }
                
                printf("A media dos alunos e de: %f\n", media);

    return 0;
}