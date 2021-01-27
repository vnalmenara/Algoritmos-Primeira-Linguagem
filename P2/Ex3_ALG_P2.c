
#include <stdio.h>

int main()
{
    int vetor[20], i, num, controle = 0;
    
    for(i = 0; i < 20; i++){
        printf("Informe um número a ser salvo na posição %i: ", i);
        scanf("%i", &vetor[i]);
    }
    
    printf("Informe o número a se encontrado: ");
    scanf("%i", &num);
    
    for(i = 0; i < 20; i++){
        if(vetor[i] == num){
            printf("O número %i foi encontrado no índice %i e foi o %iº número digitado\n", num, i, i+1);
            controle = 1;
        }
    }
    
    if(controle == 0){
        printf("O número não existe no vetor");
    }

    return 0;
}
