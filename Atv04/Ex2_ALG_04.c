
#include <stdio.h>

int main()
{
    float valorgasolina, valoralcool, resultado;
    
    printf ("Informe o valor da gasolina em reais: ");
    scanf ("%f", &valorgasolina);
    
    printf ("Informe o valor do álcool em reais: ");
    scanf ("%f", &valoralcool);
    
    resultado = valorgasolina * 0.7;
    
    if (valoralcool < resultado){
     	printf("O ÁLCOOL É MAIS VANTAJOSO");
    }
    else{
     	printf ("A GASOLINA É MAIS VANTAJOSA"); 
    }
    
    return 0;

}
