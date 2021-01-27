
#include <stdio.h>

int main()
{
    float distancia_km, milhas;
    
    printf("Por favor, informe a distância a ser percorrida em quilometros: ");
    scanf("%f", &distancia_km);
    
    milhas = distancia_km / 1.60934;
    
    printf("Sr.(a), a mesma distância percorrida em milhas é: %.2f", milhas);
    
    return 0;

}