#include <stdio.h>
int main(){
	int c;
	float f;
	printf("celcius:\n");
	scanf("%d", &c);
	float fc = (c*1.8) + 32;
	printf("%.1f", fc);
	
	return 0;
}





/*Criar um conversos de Fareinheints para Celcius
formula: F = (C x 1.8) + 32*/