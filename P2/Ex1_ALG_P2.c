
#include <stdio.h>

int main()
{
    int i, maiorSequencia, sequencia, numero;
    sequencia = 0;
    maiorSequencia = 0;
    
    for(i = 0; i < 30; i++){
        printf ("Informe um número inteiro: ");
        scanf("%i", &numero);
        
        if(numero % 3 == 0){
           sequencia++;
           if(sequencia > maiorSequencia){
               maiorSequencia = sequencia;
           }
        }
        else{
            sequencia = 0;
        }
    }
    
    printf("A maior sequência de números multiplos de três é: %i", maiorSequencia);
    
    return 0;
}

