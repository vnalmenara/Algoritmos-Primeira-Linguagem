#include <stdio.h>

int main()
{
    float distancia_km, velocidade_media, consumo_combustivel, tempo_viagem, litros_combustivel;
    
    printf("Por favor, infome a distância a ser percorrida em quilometros: ");
    scanf("%f", &distancia_km);
    
    printf("Por favor, infome a velocidade média durante a sua viagem: ");
    scanf("%f", &velocidade_media);
    
    printf("Por favor, infome o consumo de combustível: ");
    scanf("%f", &consumo_combustivel);
    
    tempo_viagem = distancia_km / velocidade_media;
    
    litros_combustivel = distancia_km / consumo_combustivel;
    
    printf("O tempo de viagem é: %.2f", tempo_viagem);
    
    printf("\nA quantidade de litros de combustível utilizado será de: %.2f", litros_combustivel);

    return 0;
}