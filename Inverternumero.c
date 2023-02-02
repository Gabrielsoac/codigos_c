#include <stdio.h>

int main () {

        int num;
        int inv;

        printf("Digite um número para ser invertido");
        scanf("%i", &num);
            
        if (num > 0) {
            do {
                inv = num % 10;
                printf("%i", inv);
                num /= 10;

            } while (num != 0);
                printf("\n");
            } else 
                if (num < 0) {
                    num = num * -1;
                    printf("-");                         
                                    
                    do {
                        inv = num % 10;
                        printf("%i", inv);
                        num /= 10;

                        } while (num != 0);
                        printf("\n");
                } else {
                    printf("Digite um número que não seja 0");
                }
    
    return 0;
}