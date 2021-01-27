
#include <stdio.h>

int main()
{
    float salario_mensal, valor_prestacao, prestacao_maxima;
    
    printf("Informe o valor do salário do trabalhador: ");
    scanf ("%f", &salario_mensal);
    
    printf("Informe o valor da prestação do empréstimo: ");
    scanf ("%f", &valor_prestacao);
    
    prestacao_maxima = salario_mensal * 0.2;
    
    if (valor_prestacao > prestacao_maxima){
    	printf ("EMPRÉSTIMO NÃO CONCEDIDO");
    }
    else{
    	printf ("EMPRÉSTIMO CONCEDIDO");
    }
    
    return 0;
}