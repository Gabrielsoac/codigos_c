#include <stdio.h>
#include <stdlib.h>

int fatorial(int x) {
                    int resultado;

                    if (x == 0) {
                        resultado = 1;
                    } else {
                            resultado = x * fatorial(x - 1);
                    }

    return resultado; 
}   

int main() {
            int fatorial(int x);
            int resultado;
            int num;

            printf("Digite um número a ser fatorado: \n");
            scanf("%i", &num);

            resultado = fatorial(num);

            printf("O fatorial de %i, é : %i", num, resultado);



    return 0;
}