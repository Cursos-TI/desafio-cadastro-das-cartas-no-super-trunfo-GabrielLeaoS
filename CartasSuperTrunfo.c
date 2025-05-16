#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.


int main() {
    printf("Desafio Super Trunfo \n");

    char Estado[50];
    char Codigo_da_carta[50];
    char Nome_da_cidade[50];
    int Populacao;
    float Area_em_km;
    float PIB;
    int Numero_de_pontos_turisticos; 

    printf("Digite o nome do Estado: ");
    scanf("%s", Estado);   
    printf("O Estado e: %s\n", Estado); 

    printf("Digite o codigo da Carta: ");
    scanf("%s", Codigo_da_carta);
    printf("O codigo da Carta e: %s\n", Codigo_da_carta);  

    printf("Digitei o nome da Cidade: ");
    scanf("%s", Nome_da_cidade);
    printf("O nome da Cidade e: %s\n", Nome_da_cidade);  
    
    printf("Digite a Populacao: ");
    scanf("%d", &Populacao);  
    printf("A Populacao e: %d\n", Populacao); 

    printf("Digite a Area em Km: ");
    scanf("%f", &Area_em_km);  
    printf("A Area em Km e: %f\n", Area_em_km); 

    printf("Digite o PIB: ");
    scanf("%f", &PIB);  
    printf("O PIB e: %f\n", PIB); 

    printf("Digite o numero de pontos Turisticos: ");
    scanf("%d", &Numero_de_pontos_turisticos);
    printf("O numero de Pontos Turisticos e: %d\n", Numero_de_pontos_turisticos);

    printf("O nome da Estado e: %s - O codigo da carta e: %s - O nome da cidade e: %s\n", Estado, Codigo_da_carta, Nome_da_cidade);
    printf("A Populacao e: %d - A Area em Km e: %f - O PIB e: %f\n", Populacao, Area_em_km, PIB);
    printf("O numero de Pontos Turisticos e: %d\n", Numero_de_pontos_turisticos);
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    return 0;
}
