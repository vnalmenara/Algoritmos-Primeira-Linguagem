
#include <stdio.h>

int main()
{

    	float salariobruto, valorIR, salariliquido, valorINSS, salariodeduzido;
    
	printf("Informe o valor do salário bruto:");
	scanf("%f", &salariobruto);
	
	valorINSS = salariobruto * 0.11;
	
	printf ("Será descontado a título de INSS o valor de R$%.2f\n", valorINSS);
	salariodeduzido = salariobruto - valorINSS;
	
	if(salariodeduzido >= 1 && salariodeduzido <= 1020){
		valorIR = 0;
		printf("Isento de Imposto de Renda");
	} 
	else {
		if(salariodeduzido >= 1020.01 && salariodeduzido <= 2500){
			valorIR = salariodeduzido * 0.07;
		    printf("A taxa de incidência do IR será de 7%%, resultando no abatimento de R$%.2f", valorIR);
		}
		else{
			if(salariodeduzido >= 2500.01 && salariodeduzido <= 3800){
				valorIR = salariodeduzido * 0.15;
		        printf("A taxa de incidência do IR será de 15%%, resultando no abatimento de R$%.2f", valorIR);
			}
			else {
				valorIR = salariodeduzido * 0.275;
		        printf("A taxa de incidência do IR será de 27.5%%, resultando no abatimento de R$%.2f", valorIR);
				
			}	
			
		}
		
	}
	
	salariliquido = salariodeduzido - valorIR;
	
	printf ("\nPortanto, o salário líquido a receber será de R$%.2f", salariliquido);
	
	return 0;
	
}