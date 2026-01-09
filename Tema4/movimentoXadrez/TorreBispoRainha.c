#include <stdio.h>

int main(){
    //mover a Torre 5 casas para a direita
    int torre =  1, bispo = 1, rainha;
    printf("Movimento da Torre\n");
    do{
        printf("Direita\n");
        torre ++;
    }
    while(torre <= 5);

    printf("Movimento do Bispo\n");
    while (bispo <= 5)
    {
        printf("Cima, ");
        printf("Direita\n ");
        bispo++;
    }

    printf("Movimento da Rainha\n");
    for(rainha = 1; rainha <= 8; rainha++){
        printf("Esquerda\n");
    }
    
    
    return 0;
}