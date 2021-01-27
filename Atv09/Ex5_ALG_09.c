
#include <stdio.h>

int main()
{

    int contador;
    float r, v, s;
    s = 0;
    contador = 0;
   
    printf ("Informe o número que gostaria de obter a média ou zero (0) para sair: ");
    scanf ("%f", &v);
    
    while (v != 0) { 
        s = s + v;
        printf ("Informe o número que gostaria de obter a média ou zero (0) para sair: ");
        scanf ("%f", &v);
        contador ++;
    } 
    
    r = s / contador;
    
    printf ("A média dos números digitados é: %.2f", r);
    
    return 0;

}