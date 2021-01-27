
#include <stdio.h>

int main()
{
    int i;
    float soma, media, alunosNotas[20];
    
    soma = 0;
    
    for(i = 0; i < 20; i++){
        printf ("Informe a nota do Aluno %i: ", i+1);
        scanf ("%f", &alunosNotas[i]);
        
        soma = soma + alunosNotas[i];
    }
    
    media = soma / 20;
    printf("Média da sala: %.2f", media);
    
    for(i = 0; i < 20; i++){
        if(alunosNotas[i] > 6){
            printf("\nO Aluno %i está aprovado com nota %.2f", i+1, alunosNotas[i]);
        }
        if(alunosNotas[i] > media){
            printf("\nO Aluno %i tem média de %.2f, maior que a média da sala de %.2f", i+1, alunosNotas[i], media);
        }
    }
    
    return 0;
}
