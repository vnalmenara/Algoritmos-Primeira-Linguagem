
#include <stdio.h>

int main()
{

    int i, j, contador;
    i = 5;
    contador = 0;
    
    do {    
        printf ("\nInforme um número inteiro: ");
        scanf ("%i", & j);
        
        if (j > i){
            printf ("\nVocê errou! O número informado é maior que o número inicial");
        }
        if (j < i){
            printf ("\nVocê errou! O número informado é menor que o número inicial");
        }
        
        contador ++;
        
    } while (i != j);
    
    printf ("\nVocê acertou! O número de tentativas de descoberta do número inicial foi %i.", contador);
    
    return 0;

}