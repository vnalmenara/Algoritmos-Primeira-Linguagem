
#include <stdio.h>

int main()
{
    int maior, menor, soma, contador, num;
    float media;
    
    contador = 0;
    soma = 0;
    maior = 0;
    menor = 0;
    
    printf ("\nInforme um número inteiro a sua escolha ou (0) para sair do programa:  ");
    scanf ("%i", & num);
    
    while (num != 0){
        soma = soma + num;
        contador ++;
        
        if (num > maior || maior == 0){
            maior = num;
        }
        if (num < menor || menor == 0){
            menor = num;
        }
        
        printf ("\nInforme um número inteiro a sua escolha ou (0) para sair do programa:  ");
        scanf ("%i", & num); 
    }
    if (contador != 0){
        media = soma / contador;
        printf ("\nA média é :%.2f", media);
        printf ("\nO maior é :%i", maior);
        printf ("\nO menor é :%i", menor);
    }
    else{
        printf ("Nenhum número foi informado");
    }
    
    return 0;

}