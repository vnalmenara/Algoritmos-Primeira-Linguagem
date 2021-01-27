
#include <stdio.h>

int main()
{

    int num, contador, resultado;
    
    printf ("Informe um número inteiro que gostaria de obter a tabuada:  ");
    scanf ("%i", & num);
    
    for (contador = 1; contador <= 10; contador ++){
        resultado = num * contador;
        printf ("\n%i X %i = %i", num, contador, resultado);
    }

    return 0;

}