
#include <stdio.h>

int main()
{
    int vetor1[10], vetor2[10], i;
    
    for(i = 0; i < 10; i++){
        printf("Informe um número a ser salvo na posição %i: ", i);
        scanf("%i", &vetor1[i]);
    }
    
    for(i = 0; i < 10; i++){
        vetor2[i] = vetor1[9-i];
        printf("vetor2[%i] = %i\n", i, vetor2[i]);
    }
    
    return 0;
}
