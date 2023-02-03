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
	float hB;

	struct arearetangulo a;
	a.base = 10;
	a.altura = 20;

	struct arearetangulo b;
	b.base = 30;
	b.altura = 40;

	hA = calculararea(a);
	hB = calculararea(b);

	printf("\n%2.f é a area do retangulo A e %2.f é a Area do retangulo B\n", hA, hB);

	return 0;
}
