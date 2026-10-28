#include <stdio.h>

int main(){
	float c;
	printf("Celsius: ");
	if (scanf("%f", &c) != 1) {
		printf("Digite um numero valido!\n");
		return 1;
	}
	float f = (c * 1.8) + 32;
	printf("%.1f C = %.1f F\n", c, f);

	return 0;
}

/* Conversor de Celsius para Fahrenheit
   formula: F = (C x 1.8) + 32 */
