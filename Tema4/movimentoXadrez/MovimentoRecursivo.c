#include <stdio.h>

void moverTorre(int casas){
    if(casas > 0){
        printf("Direita\n");
        moverTorre(casas - 1);
    }
}

void moverBispo (int casas){
    if (casas > 0){
        printf("Cima, ");
        printf("Direita\n ");
        moverBispo(casas - 1);
    }
}

void moverRainha (int casas){
    if(casas > 0){
        printf("Esquerda\n");
        moverRainha(casas - 1);
    }
}

void MoverCavalo (int casas){
    if(casas > 0){
        if (casas <= 2){
            printf("Cima\n");
            MoverCavalo(casas - 1);
        }
    }
    else {
        printf("Direita\n");
    }
}

int main(){
    printf("Movimentos da Torre\n");
    printf("\n");
    moverTorre(5);
    printf("\n");
    printf("Movimento do Bispo\n");
    printf("\n");
    moverBispo(5);
    printf("\n");
    printf("Movimento da Rainha\n");
    printf("\n");
    moverRainha(8);
    printf("\n");
    printf("Movimento do cavalo\n");
    printf("\n");
    MoverCavalo(2);
}