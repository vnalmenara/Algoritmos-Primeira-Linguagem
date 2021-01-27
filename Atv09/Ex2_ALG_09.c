
#include <stdio.h>

int main()
{

    int i, a, b, r;
    
    do {    
        scanf("%i",&a);    
        scanf("%i",&b);    
        r = a + b;    
        printf ("%i\n", r);
        i ++;
    } while (i<20);
    
    return 0;

}