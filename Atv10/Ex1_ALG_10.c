
#include <stdio.h>

int main()
{

    int v[20], i, num, contadorpar, contadorimpar;
    float percentpar, percentimpar;
    
    contadorimpar = 0;
    contadorpar = 0;
    
    printf("Informe uma sequência de 20 números inteiros: \n");
    
    for (i = 0; i < 20; i++){
        scanf ("%i", &num);
        v[i] = num;
        
        if (num % 2 ==0){
            contadorpar++;
        }
        else{
            contadorimpar++;
        }
    }
    
    percentpar = contadorpar * 100/20;
    percentimpar = contadorimpar * 100/20;
    
    printf ("O percentual de números pares é: %.1f %%", percentpar);
    printf ("\nO percentual de números ímpares é: %.1f %%", percentimpar);

    return 0;

}