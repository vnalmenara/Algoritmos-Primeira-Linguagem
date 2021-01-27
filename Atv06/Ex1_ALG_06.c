
#include <stdio.h>

int main()
{
    float salario, bonus;
    int tempoServico;
    
    printf ("Informe o valor do seu salário: ");
    scanf ("%f", &salario);
    
    printf ("Informe o tempo de serviço prestado à companhia (anos): ");
    scanf ("%i", &tempoServico);
    
    if (tempoServico>=5){
        bonus = salario*0.2;
        printf("Você receberá 20%% de bônus, equivalente a: %.2f", bonus);
    }
    else{
        bonus = salario*0.1;
        printf ("Você receberá 10%% de bônus, equivalente a: %.2f", bonus);
    }
    
    printf ("\nO total a receber é: %.2f", salario+bonus);
    
    return 0;

}