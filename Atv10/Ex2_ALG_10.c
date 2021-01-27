
#include <stdio.h>

int main()
{

    int v[10], v2[10], i, num;
    
    printf ("Informe uma sequência de 10 números inteiros: \n");
    
    for (i = 0; i< 10; i++){
        scanf ("%i", &num);
        v[i] = num;
    }
    
    for (i = 0; i< 10; i++){
        
        if (i % 2 == 0){
            v2[i] = 2 * v[i];    
        }
        else{
            v2[i] = 3 * v[i];
        }
        
        printf ("\nv[%i]=%i", i, v2[i]);
    }
    
    return 0;

}