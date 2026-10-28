#include <stdio.h> 
#include <stdlib.h> 
#include <time.h> 

#ifdef _WIN32
#include <windows.h>
#define esperar_ms(ms) Sleep(ms)
#else
#include <unistd.h>
#define esperar_ms(ms) usleep((ms) * 1000)
#endif

int main() { 
    srand(time(NULL)); 
    int num_alet = rand() % 11; 
    
    printf("Ola!, deixe-me apenas escolher um numero...\n"); 
    esperar_ms(1000); //(1000ms = 1s) 
    
    int num_esc; 
    int acertou = 0; 
    while (acertou == 0) {
        printf("OK!, agora, escolha um numero:\n"); 
        int lido = scanf("%d", &num_esc);
        if (lido == EOF) {
            return 0;
        }
        if (lido != 1) {
            int ch;
            while ((ch = getchar()) != '\n' && ch != EOF);
            printf("Digite apenas numeros!\n");
            continue;
        }
        
        if (num_alet == num_esc){ 
            printf("ACERTOU\n"); 
            acertou = 1; // Muda para 1 para fazer o while parar na próxima volta
        } 
        else if (num_alet != num_esc){ 
            printf("ERROU\n"); 
            
            if(num_alet > num_esc){ 
                printf("O NUMERO ALEATORIO E MAIOR\n"); 
            } 
            if(num_alet < num_esc ){ 
                printf("O NUMERO ALEATORIO E MENOR\n"); 
            } 
        } 
    } // Fim do while
    
    return 0; 
}
