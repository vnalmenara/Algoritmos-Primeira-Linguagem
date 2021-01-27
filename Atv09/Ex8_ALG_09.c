
#include <stdio.h>

int main()
{

    double i, s, g;
    g = 1;
    s = 0;
    
    for (i = 0; i < 64; i ++){   
        s = s + g;
        g = g * 2;
    }
    
    printf("\nO número de grãos que o monge receberá é: %.0lf", s);
    
    return 0;

}