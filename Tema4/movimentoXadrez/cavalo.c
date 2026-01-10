#include <stdio.h>

int main(){
    int movimentoCompleto = 1; // Flag para controlar o movimento em "L"

    printf("Movimento do cavalo\n");
    while (movimentoCompleto--)
    {
        for(int i = 0; i < 2; i++){
            printf("Baixo\n"); // Imprime 'baixo' 2 vezes
        }
        printf("Esquerda\n");// Imprime 'esquerda' uma vez
    }
    
}