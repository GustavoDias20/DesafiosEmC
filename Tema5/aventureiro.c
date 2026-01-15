#include <stdio.h>
#include <windows.h>

#define LINHAS 10
#define COLUNAS 10

int main(){
    char letras[10] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'}; 
    int espacos [LINHAS][COLUNAS];
    for(int i = 0; i <= LINHAS; i++){// imprimo as letras do tabuleiro
        i == 1 ? printf(" %c\t", letras[i-1]): printf("%c\t", letras[i-1]); // fiz desse modo pq a Letra 'A' estava levemente para a esquerda
        Sleep(50);
    }

    printf("\n"); // quebra de linha para não juntar os numeros

    int navios [3] = {3, 3, 3}; 
    for (int i = 0; i < 3; i++){ // navio horizontal 5B a 5D
        espacos[4][i+1] = navios[i];
    }
    
    for(int i = 0; i < 3; i++){// navio vertical 8I a 10I
        espacos[i+7][8] = navios[i];
    }

    for(int i = 0; i < 3; i++){ //navio diagonal esquerda > direita 3E a 5G
        espacos[i+2][i+4] = navios[i];
    }

    for(int i = 0; i < 3; i++){ //navio diagonal direita > esquerda 1J a 3H
        espacos[i][9-i] = navios[i];
    }

    for(int i = 0; i < LINHAS; i++){// impressão da tabela
        for(int j = 0; j < COLUNAS; j++){
            if (espacos[i][j] == 3){// verificação para ver se o espaço tem um navio
                espacos[i][j] = 3;
            }
            else{
                espacos[i][j] = 0; 
            }
            j == 0 ? printf("%d\t %d\t", i+1, espacos[i][j]) : printf("%d\t", espacos[i][j]); // fiz desse modo para imprimir tambem os numeros de 1 a 10
            Sleep(50);
        }
        printf("\n");
    }
}