#include <stdio.h>

int main(){
    float i;
    printf("Digite um número: ");
    scanf("%f", &i);

    if(i == 0){
        printf("Todos os resultados serão 0!\n");
    } else {
        for(int j = 1; j <= 10; j++){
            printf("%.0f * %d = %.0f\n", i, j, i * j);
        }
    }

    return 0;
}










/*Fazer um LOOP de tabuada*/