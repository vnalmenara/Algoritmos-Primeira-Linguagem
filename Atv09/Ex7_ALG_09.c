
#include <stdio.h>

int main()
{

    int contador, n, i, max;
    contador = 0;
    max = 0;
    
    for (i = 0; i < 10; i ++){   
        printf("Informe um número: ");
        scanf ("%i", & n);
        
        if (n % 2 == 0){
            contador ++;
            if (contador > max){
                max = contador;
            }
        }
        else{
            contador = 0;
        }
    }
    
    printf ("A maior sequência de números pares é de: %i", max);
    
    return 0;

}