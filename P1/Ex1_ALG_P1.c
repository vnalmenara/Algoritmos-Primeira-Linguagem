
#include <stdio.h>

int main()
{

    	float valorvenda, comissao;

	printf("Informe o valor da venda:");
	scanf("%f", &valorvenda);
	
	if(valorvenda <= 100){
		comissao = valorvenda * 0.01;
		printf("A venda realizada gerou 1%% de comissão, ou seja, \nsobre o valor da venda de R$%.2f a comissão será de R$%.2f", valorvenda, comissao);
	} 
	
	else {
		if(valorvenda >= 101 && valorvenda <= 200){
			comissao = valorvenda * 0.02;
		    printf("A venda realizada gerou 2%% de comissão, ou seja, \nsobre o valor da venda de R$%.2f a comissão será de R$%.2f", valorvenda, comissao);
		}
		else{
			if(valorvenda >= 201 && valorvenda <= 300){
				comissao = valorvenda * 0.03;
		        printf("A venda realizada gerou 3%% de comissão, ou seja, \nsobre o valor da venda de R$%.2f a comissão será de R$%.2f", valorvenda, comissao);
			}
			else {
				if(valorvenda >= 301 && valorvenda <= 400){
					comissao = valorvenda * 0.04;
		            printf("A venda realizada gerou 4%% de comissão, ou seja, \nsobre o valor da venda de R$%.2f a comissão será de R$%.2f", valorvenda, comissao);
				} 
				else {
					comissao = valorvenda * 0.05;
		            printf("A venda realizada gerou 5%% de comissão, ou seja, \nsobre o valor da venda de R$%.2f a comissão será de R$%.2f", valorvenda, comissao);
				}
			}	
			
		}
		
	}

	return 0;

}