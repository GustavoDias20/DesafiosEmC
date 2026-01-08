#include <stdio.h>
#include <string.h> // necessario para conseguir usar fgets e comparar strings

int main(){
    //declarando as variaveis
    char estado = 'A', codigoCarta[10] = "A01", nomeCidade[50] = "São Paulo", estado2 = 'B', codigoCarta2[10] = "B02", nomeCidade2[50] = "Rio de Janeiro";
    int numero, pontosTuristicos = 50, pontosTuristicos2 = 30, opcao, opcao2, indiceRemov;
    float area = 1521.11, pib = 699.28, area2 = 1200.25, pib2 = 300.50, densidadePop, densidadePop2;
    char escolha [5][50]= {
        "População",
        "Área",
        "PIB",
        "Numero de pontos turísticos",
        "Densidade populacional"
    };
    char opcaoSel[2][50];

    unsigned long int populacao = 12325000, populacao2 = 6748000;

    densidadePop = (float) populacao/area;
    densidadePop2 = (float) populacao2/area2;

    printf("Super Trunfo!\n Comparação de castar!!!\n");
    printf("Escolha o primeiro atributo para as cartas serem comparadas!\n");
    printf("1. %s\n 2. %s\n 3. %s\n 4. %s\n 5. %s\n Escolha: ", escolha[0], escolha[1], escolha[2], escolha[3], escolha[4]);
    scanf("%d", & opcao);
    if (opcao <= 0 || opcao > 5){
        printf("Opção invalida");
        return 0;
    }
    strcpy(opcaoSel[0], escolha[opcao-1]);
    indiceRemov = opcao - 1;
    int total = 5;

    for (int i = indiceRemov; i < total - 1; i++){
        strcpy(escolha[i], escolha[i+1]);
    }
    printf("Escolha o segundo atributo para as cartas serem comparadas!\n");
    printf("1. %s\n 2. %s\n 3. %s\n 4. %s\n Escolha: ", escolha[0], escolha[1], escolha[2], escolha[3]);
    scanf("%d", & opcao2);
    if (opcao2 <= 0 || opcao2 > 4){
        printf("Opção invalida");
        return 0;
    }
    strcpy(opcaoSel[1], escolha[opcao2-1]);

    printf("Primeiro atributo selecionado: %s\n", opcaoSel[0], nomeCidade, nomeCidade2);
    printf("Segundo atributo selecionado: %s\n Estado de: %s contra Estado de: %s\n", opcaoSel[1], nomeCidade, nomeCidade2);


    //comparação primeiro atributo
    if (strcmp(opcaoSel[0], "População") == 0){
        printf("Valores primeiro atributo:\n %s: %d Pessoas\n %s: %d Pessoas\n", nomeCidade, populacao, nomeCidade2, populacao2);
        if(populacao == populacao2){
            printf("Empate no primeiro atributo!");
        }
        else if(populacao > populacao2){
            printf("A carta vencedora do primeiro atributo é: %s!!!\n", nomeCidade);
        }
        else{
            printf("A carta vencedora do primeiro atributo é: %s!!!\n", nomeCidade2);
        }
    }
    else if(strcmp(opcaoSel[0], "Área") == 0){
        printf("Valores primeiro atributo:\n %s: %.2f km²\n %s: %.2f km²\n", nomeCidade, area, nomeCidade2, area2);
        if(area == area2){
            printf("Empate no primeiro atributo!");
        }
        else if(area > area2){
            printf("A carta vencedora do primeiro atributo é: %s!!!\n", nomeCidade);
        }
        else{
            printf("A carta vencedora do primeiro atributo é: %s!!!\n", nomeCidade2);
        }
    }
    else if(strcmp(opcaoSel[0], "PIB") == 0){
        printf("Valores primeiro atributo:\n %s: %.2f R$ Bi\n %s: %.2f R$ Bi\n", nomeCidade, pib, nomeCidade2, pib2);
        if(pib == pib2){
            printf("Empate no primeiro atributo!");
        }
        else if(pib > pib2){
            printf("A carta vencedora do primeiro atributo é: %s!!!\n", nomeCidade);
        }
        else{
            printf("A carta vencedora do primeiro atributo é: %s!!!\n", nomeCidade2);
        }
    }
    else if(strcmp(opcaoSel[0], "Numero de pontos turísticos") == 0){
        printf("Valores primeiro atributo:\n %s: %d Pontos\n %s: %d Pontos\n", nomeCidade, pontosTuristicos, nomeCidade2, pontosTuristicos2);
        if (pontosTuristicos == pontosTuristicos2){
            printf("Empate no primeiro atributo!");
        }
        else if (pontosTuristicos > pontosTuristicos2){
            printf("A carta vencedora do primeiro atributo é: %s!!!\n", nomeCidade);
        }
        else{
            printf("A carta vencedora do primeiro atributo é: %s!!!\n", nomeCidade2);
        }
    }
    else {
        printf("Valores primeiro atributo:\n %s: %.2f hab/km²\n %s: %.2f hab/km²\n", nomeCidade, densidadePop, nomeCidade2, densidadePop2);
        if(densidadePop == densidadePop2){
            printf("Empate no primeiro atributo!");
        }
        else if(densidadePop < densidadePop2){
            printf("A carta vencedora do primeiro atributo é: %s!!!\n", nomeCidade);
        }
        else{
            printf("A carta vencedora do primeiro atributo é: %s!!!\n", nomeCidade2);
        }
    }
    //comparação segundo atributo
    if (strcmp(opcaoSel[1], "População") == 0){
        printf("Valores segundo atributo:\n %s: %d Pessoas\n %s: %d Pessoas\n", nomeCidade, populacao, nomeCidade2, populacao2);
        if(populacao == populacao2){
            printf("Empate no segundo atributo!");
        }
        else if(populacao > populacao2){
            printf("A carta vencedora do segundo atributo é: %s!!!\n", nomeCidade);
        }
        else{
            printf("A carta vencedora do segundo atributo é: %s!!!\n", nomeCidade2);
        }
    }
    else if(strcmp(opcaoSel[1], "Área") == 0){
        printf("Valores segundo atributo:\n %s: %.2f km²\n %s: %.2f km²\n", nomeCidade, area, nomeCidade2, area2);
        if(area == area2){
            printf("Empate no segundo atributo!");
        }
        else if(area > area2){
            printf("A carta vencedora do segundo atributo é: %s!!!\n", nomeCidade);
        }
        else{
            printf("A carta vencedora do segundo atributo é: %s!!!\n", nomeCidade2);
        }
    }
    else if(strcmp(opcaoSel[1], "PIB") == 0){
        printf("Valores segundo atributo:\n %s: %.2f R$ Bi\n %s: %.2f R$ Bi\n", nomeCidade, pib, nomeCidade2, pib2);
        if(pib == pib2){
            printf("Empate no segundo atributo!");
        }
        else if(pib > pib2){
            printf("A carta vencedora do segundo atributo é: %s!!!\n", nomeCidade);
        }
        else{
            printf("A carta vencedora do segundo atributo é: %s!!!\n", nomeCidade2);
        }
    }
    else if(strcmp(opcaoSel[1], "Numero de pontos turísticos") == 0){
        printf("Valores segundo atributo:\n %s: %d Pontos\n %s: %d Pontos\n", nomeCidade, pontosTuristicos, nomeCidade2, pontosTuristicos2);
        if (pontosTuristicos == pontosTuristicos2){
            printf("Empate no segundo atributo!");
        }
        else if (pontosTuristicos > pontosTuristicos2){
            printf("A carta vencedora do segundo atributo é: %s!!!\n", nomeCidade);
        }
        else{
            printf("A carta vencedora do segundo atributo é: %s!!!\n", nomeCidade2);
        }
    }
    else {
        printf("Valores segundo atributo:\n %s: %.2f hab/km²\n %s: %.2f hab/km²\n", nomeCidade, densidadePop, nomeCidade2, densidadePop2);
        if(densidadePop == densidadePop2){
            printf("Empate no segundo atributo!");
        }
        else if(densidadePop < densidadePop2){
            printf("A carta vencedora do segundo atributo é: %s!!!\n", nomeCidade);
        }
        else{
            printf("A carta vencedora do segundo atributo é: %s!!!\n", nomeCidade2);
        }
    }

    float somaCarta1, somaCarta2;
    somaCarta1 = (float) populacao + area + pib + pontosTuristicos + densidadePop;
    somaCarta2 = (float) populacao2 + area2 + pib2 + pontosTuristicos2 + densidadePop2;

    printf("A soma dos atributos da carta A01: %s é: %.2f\n", nomeCidade, somaCarta1);
    printf("A soma dos atributos da carta B02: %s é: %.2f\n", nomeCidade2, somaCarta2);

    int resultado = somaCarta1 > somaCarta2 ? 1 : 0;

    switch (resultado)
    {
    case 1:
        printf("A carta vencedora é A01: %s\n", nomeCidade);
        break;
    case 0:
        printf("A carta vencedora é B02: %s\n", nomeCidade2);
        break;
    }
}