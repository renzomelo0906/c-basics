#include <stdio.h> 
#include <stdlib.h> 
#include <time.h> 

int main() { 
    srand(time(NULL)); 
    int num_alet = rand() % 11; 
    
    printf("Ola!, deixe-me apenas escolher um numero...\n"); 
    _sleep(1000); //(1000ms = 1s) 
    
    int num_esc; 
    int acertou = 0; 
    while (acertou == 0) {
        printf("OK!, agora, escolha um numero:\n"); 
        scanf("%d", &num_esc); 
        
        if (num_alet == num_esc){ 
            printf("ACERTOU\n"); 
            acertou = 1; // Muda para 1 para fazer o while parar na próxima volta
        } 
        else if (num_alet != num_esc){ 
            printf("ERROU\n"); 
            
            if(num_alet > num_esc){ 
                printf("O NUMERO ALEATORIO É MAIOR\n"); 
            } 
            if(num_alet < num_esc ){ 
                printf("O NUMERO ALEATORIO E MENOR\n"); 
            } 
        } 
    } // Fim do while
    
    return 0; 
}
