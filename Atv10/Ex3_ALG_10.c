
#include <stdio.h>

int main()
{

    int v[20], i, num, max, min, soma;
    float media;
    
    max = -2147483648;
    min = 2147483647;
    soma = 0;
    
    printf ("Informe uma sequência de 20 números inteiros: \n");
    
    for (i = 0; i< 20; i++){
        scanf ("%i", &num);
        v[i] = num;
    }
    
    for (i = 0; i< 20; i++){
        
        if (v[i] > max){
            max = v[i];
        }
        if (v[i] < min){
            min = v[i];
        }
        
        soma = soma + v[i];
    }
    
    media = soma/20;
    
    printf ("O maior número encontrado na sequência foi: %i", max);
    printf ("\nO menor número encontrado na sequência foi: %i", min);
    printf ("\nA média dos números informados é: %.2f", media);
    
    return 0;

}