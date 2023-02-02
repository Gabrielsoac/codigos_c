#include <stdio.h>
#include <stdlib.h>

int main() {
          int alunos[5] = {2, 5, 6, 2, 1};

          void ordemCrescente (int vetor[], int x);

          ordemCrescente(alunos, 5);

          for (int i = 0; i < 5; i++) {
                printf("%i", alunos[i]);
          }

    return 0;
}

void ordemCrescente (int vetor[], int x) {

    int temporaria;
    
    for (int i = 0; i < x; i++) {
    
        for (int j = i + 1; j < x; j++) {
           
            if (vetor[i] > vetor[j]) {

                temporaria = vetor[i];
                vetor[i] = vetor[j];
                vetor[j] = temporaria;
            }
        }
    }
}
