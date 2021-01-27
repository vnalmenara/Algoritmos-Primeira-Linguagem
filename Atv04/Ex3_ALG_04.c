
#include <stdio.h>

int main()
{
    float p1, p2, p3, mediafinal;
    
    printf("Informe o valor da nota da p1 (considere de 0 à 100): ");
    scanf ("%f", &p1);
    
    printf("Informe o valor da nota da p2 (considere de 0 à 100): ");
    scanf ("%f", &p2);
    
    printf("Informe o valor da nota da p3 (considere de 0 à 100): ");
    scanf ("%f", &p3);
    
    mediafinal = ((p1 * 1) + (p2 * 1) + (p3 * 2)) / 4;
    
    if (mediafinal >= 60){
    	printf ("ALUNO APROVADO");
    }
    else{
    	printf ("ALUNO REPROVADO");
    }
    
    return 0;

}
