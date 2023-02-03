#include <stdio.h>
#include <stdlib.h>

struct arearetangulo {
	float base;
	float altura;
};

float calculararea (struct arearetangulo x) {

    return x.base * x.altura;
}

int main () {

	float calculararea (struct arearetangulo x);
	float hA;

	struct arearetangulo a;
	
	printf("Insira o valor da base do retangulo: \n");
	scanf("%f", &a.base);
	printf("Insira o valor da altura do retangulo: \n");
	scanf("%f", &a.altura);

	hA = calculararea(a);

	printf("A area do retangulo é %.2f", hA);

	return 0;
}
