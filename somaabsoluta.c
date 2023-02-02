#include <stdio.h>
#include <stdlib.h>

int converteNegativo (int t) {

    return t * -1;
}

int somaNumero (int y, int x) {

                    if (y < 0) {  
                        y = converteNegativo(y);
                    }
                    if (x < 0) {
                        x = converteNegativo (x);
                    }                 

    return y + x;
}


int main () {
            int num1;
            int num2;
            int soma;
            int somaNumero(int y, int x);

            printf("Digite numeros a serem somados de forma absoluta: \n");
            scanf("%i", &num1);
            scanf("%i", &num2);

            soma = somaNumero(num1, num2);

            printf("A soma dos dois numero absolutos é: %i", soma);

    return 0;
}