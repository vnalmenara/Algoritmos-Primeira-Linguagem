
#include <stdio.h>

int main()
{

    int i;
    
    for (i = 0; i <= 100; i ++){   
        printf ("\n%i", i);
        
        if (i % 3 == 0 && i % 5 == 0){
            printf (" - Múltiplo de 3 e 5");
        }
    }
    
    return 0;

}