
int main() {
    
    printf("*** Desafio Super Trunfo ***\n");
     
    // Dados da Carta 1
    
    char Estado[50];
    char Codigo_da_carta[50];
    char Nome_da_cidade[50];
    int Populacao;
    float Area_em_km;
    float PIB;
    int Numero_de_pontos_turisticos; 

    // Dados da Carta 2
    
    char Estado_2[50];
    char Codigo_da_carta_2[50];
    char Nome_da_cidade_2[50];
    int Populacao_2;
    float Area_em_km_2;
    float PIB_2;
    int Numero_de_pontos_turisticos_2; 
    
    // Leitura carta 1

    printf("==== Carta 1 ====\n");

    printf("Digite o nome do Estado: ");
    scanf("%s", Estado);   
     

    printf("Digite o codigo da Carta: ");
    scanf("%s", Codigo_da_carta);
      

    printf("Digitei o nome da Cidade: ");
    scanf("%s", Nome_da_cidade);
      
    
    printf("Digite a Populacao: ");
    scanf("%d", &Populacao);  
     

    printf("Digite a Area em Km: ");
    scanf("%f", &Area_em_km);  
     

    printf("Digite o PIB: ");
    scanf("%f", &PIB);  
    

    printf("Digite o numero de pontos Turisticos: ");
    scanf("%d", &Numero_de_pontos_turisticos);

    // Leitura carta 2

    printf("==== Carta 2 ====\n");

    printf("Digite o nome do Estado: ");
    scanf("%s", Estado_2);   
     

    printf("Digite o codigo da Carta: ");
    scanf("%s", Codigo_da_carta_2);
      

    printf("Digitei o nome da Cidade: ");
    scanf("%s", Nome_da_cidade_2);
      
    
    printf("Digite a Populacao: ");
    scanf("%d", &Populacao_2);  
     

    printf("Digite a Area em Km: ");
    scanf("%f", &Area_em_km_2);  
     

    printf("Digite o PIB: ");
    scanf("%f", &PIB_2);  
    

    printf("Digite o numero de pontos Turisticos: ");
    scanf("%d", &Numero_de_pontos_turisticos_2);
    printf("\n");
    
    // Impressão da Carta 1
    printf("==== Carta 1 ====\n");
    printf("O nome da Estado e: %s\n", Estado);
    printf("O codigo da carta e: %s\n", Codigo_da_carta);
    printf("O nome da cidade e: %s\n", Nome_da_cidade);
    printf("A Populacao e: %d\n", Populacao);
    printf("A Area em Km e: %.2f\n", Area_em_km);
    printf("O PIB e: %.2f\n", PIB);
    printf("O numero de Pontos Turisticos e: %d\n", Numero_de_pontos_turisticos);

    // Impressão da Carta 2
    printf("==== Carta 2 ====\n");
    printf("O nome da Estado e: %s\n", Estado_2);
    printf("O codigo da carta e: %s\n", Codigo_da_carta_2);
    printf("O nome da cidade e: %s\n", Nome_da_cidade_2);
    printf("A Populacao e: %.d\n", Populacao_2);
    printf("A Area em Km e: %.2f\n", Area_em_km_2);
    printf("O PIB e: %.2f\n", PIB_2);
    printf("O numero de Pontos Turisticos e: %d\n", Numero_de_pontos_turisticos_2);

    
    printf("\nPressione ENTER para sair...\n");
    getchar(); // Para limpar o buffer
    getchar(); // Aguarda ENTER
    
    return 0;

}
