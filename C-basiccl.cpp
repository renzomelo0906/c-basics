#include <stdio.h>

int main() {
    int mN1;
    int mN2;
    
    printf("Escolha um numero: \n");
    scanf("%d", &mN1);
    printf("Escolha outro numero: \n");
    scanf("%d", &mN2);
  
    char op; 
    printf("Escolha uma operacao: + - * ou / \n");
   
    scanf(" %c", &op); 
   
    int sum = mN1 + mN2;
    int mns = mN1 - mN2;
    int mlt = mN1 * mN2;
    int dvs = mN1 / mN2;
  
    
    if (op == '*') {
        printf("Resultado: %d\n", mlt); 
    } else if (op == '+') {
        printf("Resultado: %d\n", sum);
    } else if (op == '-') {
        printf("Resultado: %d\n", mns);
    } else if (op == '/') {
        // Evita divisão por zero
        if (mN2 != 0) {
            printf("Resultado: %d\n", dvs);
        } else {
            printf("Erro: Nao e possivel dividir por zero.\n");
        }
    } else {
        printf("Bota algo certo porra\n");
    }
   
    return 0;
}
