
#include <stdio.h>

int main()
{
    float indicepoluicao;
    
    printf ("Informe o índice de poluição medido (0 a 1): ");
    scanf ("%f", &indicepoluicao);
    
    if (indicepoluicao < 0.3){
        printf ("Índice de poluição aceitável");
    }
    else{
        if (indicepoluicao < 0.4){
            printf ("Intime-se o 1º grupo de indústrias a suspenderem suas atividades");
        }
        else{
            if (indicepoluicao < 0.5){
                printf ("Intime-se o 1º e 2º grupo de indústrias a suspenderem suas atividades");
            }
            else{
                printf ("Intime-se todos os grupos de indústrias a suspenderem suas atividades");
            }
        }
    }

    return 0;

}