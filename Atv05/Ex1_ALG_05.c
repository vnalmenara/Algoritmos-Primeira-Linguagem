
#include <stdio.h>

int main()
{
    float p1, p2, media, p3;
    int faltas, percfaltas;
    
    printf ("Informe a nota da p1: ");
    scanf ("%f", &p1);
    
    printf ("Informe a nota da p2: ");
    scanf ("%f", &p2);
    
    printf ("Informe a quantidade de faltas no semestre: ");
    scanf ("%i", &faltas);
    
    media = (p1 + p2) / 2;
    
    percfaltas = faltas * 100/20;
    
    if (percfaltas > 30) {
        printf ("ALUNO REPROVADO");
    }
    else{
        if (media >= 6){
           printf ("ALUNO APROVADO"); 
        }
        else{
            printf ("Informe a nota da p3: ");
            scanf ("%f", &p3); 
            
            media = (p1 + p2 + p3) / 3;
            
            if (media >= 6){
                printf ("APROVADO NO EXAME");
            }
            else{
                printf ("REPROVADO POR NOTA");
            }
        }
    }
    
    return 0;

}