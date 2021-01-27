
#include <stdio.h>

int main()
{
    int v, resto;
    
    printf ("Informe um número: ");
    scanf ("%i", &v);
    
    resto = v % 2;
    
    if (resto == 0){
     	printf ("PAR");
    }
    else{
     	printf ("ÍMPAR"); 
    }
    
    return 0;


}