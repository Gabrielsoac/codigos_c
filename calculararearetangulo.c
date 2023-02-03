#include <stdio.h>
#include <stdlib.h>

float calcareaRetang (float x, float y) {
        float area = x * y;

        return area;
}

int main() {
        float calcareaRetang (float x, float y);
        float base;
        float altura;
        float arearetang;

        printf("Digite a base e a altura do retangulo\n");
        scanf("%f", &base);
        scanf("%f", &altura);

        arearetang = calcareaRetang(base, altura);

            printf("A area do retangulo é: %f\n", arearetang);

    return 0;
}
