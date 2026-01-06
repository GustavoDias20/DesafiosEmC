#include <stdio.h>
#include <string.h> // necessario para conseguir usar fgets e comparar strings

int main(){
    //declarando as variaveis
    char estado = 'A', codigoCarta[10] = "A01", nomeCidade[50] = "São Paulo", estado2 = 'B', codigoCarta2[10] = "B02", nomeCidade2[50] = "Rio de Janeiro";
    int numero, pontosTuristicos = 50, pontosTuristicos2 = 30, opcao;
    float area = 1521.11, pib = 699.28, area2 = 1200.25, pib2 = 300.50, densidadePop, densidadePop2;

    unsigned long int populacao = 12325000, populacao2 = 6748000;

    densidadePop = (float) populacao/area;
    densidadePop2 = (float) populacao2/area2;

    printf("Super Trunfo!\n Comparação de castar!!!\n");
    printf("Escolha um atributo para as cartas serem comparadas!\n");
    printf("1. População\n 2. Área\n 3. PIB\n 4. Número de pontos turísticos\n 5. Densidade populacional\n Escolha: ");
    scanf("%d", & opcao);
    switch (opcao)
    {
    case 1:
        printf("Atributo selecionado: População\n Estado de: %s contra Estado de: %s\n", nomeCidade, nomeCidade2);
        printf("Valores:\n %s: %d Pessoas\n %s: %d Pessoas\n", nomeCidade, populacao, nomeCidade2, populacao2);
        if(populacao == populacao2){
            printf("Empate!");
        }
        else if(populacao > populacao2){
            printf("A carta vencedora é: %s!!!", nomeCidade);
        }
        else{
            printf("A carta vencedora é: %s!!!", nomeCidade2);
        }
        break;
    case 2:
        printf("Atributo selecionado: Área\n Estado de: %s contra Estado de: %s\n", nomeCidade, nomeCidade2);
        printf("Valores:\n %s: %.2f km²\n %s: %.2f km²\n", nomeCidade, area, nomeCidade2, area2);
        if(area == area2){
            printf("Empate!");
        }
        else if(area > area2){
            printf("A carta vencedora é: %s!!!", nomeCidade);
        }
        else{
            printf("A carta vencedora é: %s!!!", nomeCidade2);
        }
        break;
    case 3:
        printf("Atributo selecionado: PIB\n Estado de: %s contra Estado de: %s\n", nomeCidade, nomeCidade2);
        printf("Valores:\n %s: %.2f R$ Bi\n %s: %.2f R$ Bi\n", nomeCidade, pib, nomeCidade2, pib2);
        if(pib == pib2){
            printf("Empate!");
        }
        else if(pib > pib2){
            printf("A carta vencedora é: %s!!!", nomeCidade);
        }
        else{
            printf("A carta vencedora é: %s!!!", nomeCidade2);
        }
        break;
    case 4:
        printf("Atributo selecionado: Numero de pontos turisticos\n Estado de: %s contra Estado de: %s\n", nomeCidade, nomeCidade2);
        printf("Valores:\n %s: %d Pontos\n %s: %d Pontos\n", nomeCidade, pontosTuristicos, nomeCidade2, pontosTuristicos2);
        if (pontosTuristicos == pontosTuristicos2){
            printf("Empate!");
        }
        else if (pontosTuristicos > pontosTuristicos2){
            printf("A carta vencedora é: %s!!!", nomeCidade);
        }
        else{
            printf("A carta vencedora é: %s!!!", nomeCidade2);
        }
        break;
    case 5:
        printf("Atributo selecionado: Densidade populacional\n Estado de: %s contra Estado de: %s\n", nomeCidade, nomeCidade2);
        printf("Valores:\n %s: %.2f hab/km²\n %s: %.2f hab/km²\n", nomeCidade, densidadePop, nomeCidade2, densidadePop2);
        if(densidadePop == densidadePop2){
            printf("Empate!");
        }
        else if(densidadePop < densidadePop2){
            printf("A carta vencedora é: %s!!!", nomeCidade);
        }
        else{
            printf("A carta vencedora é: %s!!!", nomeCidade2);
        }
        break;
    default:
        printf("Opção invalida!");
        break;
    }

    /*float  PIBperCapta, PIBperCapta2;

    
    PIBperCapta = (float) (pib*1000000000)/populacao;
    PIBperCapta2 = (float) (pib2*1000000000)/populacao2;

    float superPoderC1, superPoderC2;

    superPoderC1 = (float) populacao + area + pib + pontosTuristicos + PIBperCapta + (densidadePop*-1);//lembrar sempre de fazer o casting para variaveis diferentes
    superPoderC2 = (float) populacao2 + area2 + pib2 + pontosTuristicos2 + PIBperCapta2 + (densidadePop2*-1);*/


}