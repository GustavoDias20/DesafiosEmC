#include <stdio.h>
#include <windows.h>

int main(){
    char letras[10] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'}; 
    int espacos [10][10];
    for(int i = 0; i <= 10; i++){// imprimo as letras do tabuleiro
        i == 1 ? printf(" %c\t", letras[i-1]): printf("%c\t", letras[i-1]); // fiz desse modo pq a Letra 'A' estava levemente para a esquerda
        Sleep(150);
    }

    printf("\n"); // quebra de linha para não juntar os numeros

    int navios [3] = {3, 3, 3}; 
    for (int i = 0; i < 3; i++){ // navio horizontal
        espacos[4][i+1] = navios[i];
    }
    
    for(int i = 0; i < 3; i++){// navio vertical
        espacos[i+7][8] = navios[i];
    }

    for(int i = 0; i < 10; i++){// impressão da tabela
        for(int j = 0; j < 10; j++){
            if (espacos[i][j] == 3){// verificação para ver se o espaço tem um navio
                espacos[i][j] = 3;
            }
            else{
                espacos[i][j] = 0; 
            }
            j == 0 ? printf("%d\t %d\t", i+1, espacos[i][j]) : printf("%d\t", espacos[i][j]); // fiz desse modo para imprimir tambem os numeros de 1 a 10
            Sleep(150);
        }
        printf("\n");
    }
}