
#include <stdio.h>

int main()
{
    int passageiros[24], i, soma, maior, menor;
    float media;
    
    soma = 0;
    maior = 0;
    menor = 2147483647;
    
    for(i = 0; i < 24; i++){
        printf ("Informe a quantidade de passageiros da linha de ônibus entre os horários %i:00 à %i:59: ", i, i);
        scanf ("%i", &passageiros[i]);
        
        soma = soma + passageiros[i];
        
        if(passageiros[i] > maior){
            maior = passageiros[i];
        }
        if(passageiros[i] < menor){
            menor = passageiros[i];
        }
    }
    
    media = soma / 24;
    
    printf("A média de passageiros por hora no dia foi de: %.2f", media);
    printf("\nA maior quantidade de passageiros por hora no dia foi de: %i", maior);
    printf("\nA menor quantidade de passageiros por hora no dia foi de: %i", menor);

    return 0;
}
