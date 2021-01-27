
#include <stdio.h>

int main()
{

    int contador, n, i, contador2;
    contador = 0;
    contador2 = 0;
    
    for (i = 0; i < 10; i ++){   
        printf("Informe um número: ");
        scanf ("%i", & n);
        
        if (n % 2 == 0){
            contador ++;
        }
        if (n % 3 == 0){
            contador2 ++;
        }
    }
    printf ("Foram verificados %i números múltiplos de 2 e %i números múltiplos de 3", contador, contador2);
    
    return 0;

}