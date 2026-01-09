#include <stdio.h>
#include <string.h>

int main(){
    //declarando as variaveis
    char estado, codigoCarta[10], nomeCidade[50], estado2, codigoCarta2[10], nomeCidade2[50];
    int pontosTuristicos, pontosTuristicos2;
    float area, pib, area2, pib2;

    unsigned long int populacao, populacao2;

    printf("Super Trunfo!\n Cadastro de cartas\n");
    printf("Carta 01\n");

    //cadastro do estado
    printf("Entre com o nome do Estado da carta: (uma letra de 'A' a 'H')\n");
    scanf(" %c", &estado);

    //cadastro do codigo da carta
    printf("Entre com o codigo da carta: (letra do estado + numero de 01 a 04, como exemplo A04)\n");
    scanf(" %s", codigoCarta);
    getchar(); //consome o \n que ficou no buffer

    //cadastro do nome da cidade
    printf("Entre com o nome da cidade\n");
    fgets(nomeCidade,50,stdin); //fgets para conseguir pegar nomes que tenham espaço
    
    //com o fgets, ele lê o que é digitado completamente pelo teclado, então caso eu digite um nome e clique enter, ele vai receber
    // "São Paulo\n" aonde o \n seria o enter do teclado, a gente pode remover esse \n em codigo

    nomeCidade[strcspn(nomeCidade, "\n")] = 0;

    //nesta linha a gente transforma o \n em \0, o que acaba com a leitura da cadeia de caracteres é sempre um \0

    //cadastro da população
    printf("Entre com o numero de habitantes\n");
    scanf("%u", &populacao);

    //cadastro da área em km quadrado
    printf("Entre com a área em km quadrados\n");
    scanf("%f", &area);

    //cadastro do PIB
    printf("Entre com o PIB da cidade em Bilhões 'exemplo: 300.50' (neste caso 300.50 Bilhões de reais)\n");
    scanf("%f", &pib);


    //cadastro do ponto turistico
    printf("Entre com a quantidade de pontos turisticos\n");
    scanf("%i", &pontosTuristicos);

    //decidi replicar os mesmos codigos acima para fazer o cadastro da carta 2, pensei em imprimir a carta 01 e para reutilizar as variaveis que ja foram declaradas
    //porem como são poucas variaveis, decidi fazer desta maneira, criando mais, o ideal seria ter um arquivo .txt para guardar as informações das cartas, ao invés
    //de ficar consumindo memoria, por ser um programa leve, não tem muito problema, mas em um programa de larga escala, isso pode vir a comprometer o desempenho do programa

    printf("Carta 02\n");

    printf("Entre com o nome do Estado da carta: (uma letra de 'A' a 'H')\n");
    scanf(" %c", &estado2);

    printf("Entre com o codigo da carta: (letra do estado + numero de 01 a 04, como exemplo A04)\n");
    scanf(" %s", codigoCarta2);
    getchar();

    printf("Entre com o nome da cidade\n");
    fgets(nomeCidade2,50,stdin);
    nomeCidade2[strcspn(nomeCidade2, "\n")] = 0;

    printf("Entre com o numero de habitantes\n");
    scanf("%u", &populacao2);

    printf("Entre com a área em km quadrados\n");
    scanf("%f", &area2);

    printf("Entre com o PIB da cidade em Bilhões 'exemplo: 300.50' (neste caso 300.50 Bilhões de reais)\n");
    scanf("%f", &pib2);

    printf("Entre com a quantidade de pontos turisticos\n");
    scanf("%i", &pontosTuristicos2);

    float densidadePop, PIBperCapta, densidadePop2, PIBperCapta2;

    densidadePop = (float) populacao/area;
    densidadePop2 = (float) populacao2/area2;
    PIBperCapta = (float) (pib*1000000000)/populacao;
    PIBperCapta2 = (float) (pib2*1000000000)/populacao2;

    float superPoderC1, superPoderC2;

    superPoderC1 = (float) populacao + area + pib + pontosTuristicos + PIBperCapta + (densidadePop*-1);//lembrar sempre de fazer o casting para variaveis diferentes
    superPoderC2 = (float) populacao2 + area2 + pib2 + pontosTuristicos2 + PIBperCapta2 + (densidadePop2*-1);

    printf("CARTA 01: \n Estado: %c\n Código: %s\n Nome da Cidade: %s\n População: %u\n Área: %.2f km²\n PIB: %.2f bilhões de reais\n Pontos Turisticos: %i\n Densidade Populacional: %.2f hab/km²\n PIB per Capita: %.2f reais\n", estado, codigoCarta, nomeCidade, populacao, area, pib, pontosTuristicos, densidadePop, PIBperCapta);

    printf("CARTA 02: \n Estado: %c\n Código: %s\n Nome da Cidade: %s\n População: %u\n Área: %.2f km²\n PIB: %.2f bilhões de reais\n Pontos Turisticos: %i\n Densidade Populacional: %.2f hab/km²\n PIB per Capita: %.2f reais\n", estado2, codigoCarta2, nomeCidade2, populacao2, area2, pib2, pontosTuristicos2, densidadePop2, PIBperCapta2);

    printf("Comparação de Cartas:\n Regra: na comparação que será feita, o numero 1 representa a carta 01 e o numero 0 representa a carta 02, dito isso, começamos a comparação\n População: %d venceu\n Área: %d venceu\n PIB: %d venceu\n Pontos Turiscticos: %d venceu\n Densidade Populacional: %d venceu\n PIB per capta: %d venceu\n Super Poder: %d venceu\n", populacao > populacao2, area > area2, pib > pib2, pontosTuristicos > pontosTuristicos2, densidadePop > densidadePop2, PIBperCapta > PIBperCapta2, superPoderC1 > superPoderC2);
}