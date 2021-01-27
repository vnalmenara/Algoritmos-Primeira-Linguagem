
#include <stdio.h>

int main()
{

    int linha, coluna, i, j, menu;
    float min, max, variacao, variacaoMax;
    
    linha = 10;
    coluna = 3;
    min = 1000;
    max = -1000;
    variacaoMax = -1000;
    
    float temperatura [linha][coluna];
    
    for(i = 0; i < linha; i++){
        for(j = 0; j < coluna; j++){
            if(j == 0){
                printf("Digite a temperatura mínima registrada no dia %i: ", i+1);
                scanf("%f", &temperatura[i][j]);
            }
            else if(j == 1){
                printf("Digite a temperatura máxima registrada no dia %i: ", i+1);
                scanf("%f", &temperatura[i][j]);
            }
            else{
                temperatura[i][j] = (temperatura[i][0] + temperatura[i][1]) / 2;
            }
            
        }
    }
    
    printf("       Tmin  Tmax  Med");
        
    for(i = 0; i < linha; i++){
        printf("\nDia %i  ", i+1);
        for(j = 0; j < coluna; j++){
            printf("%.1f  ", temperatura[i][j]);
        }
    }
    
    do{
        printf("\nSelecione a operação desejada: ");
        printf("\n(1) Temperatura mínima de todos os dias;");
        printf("\n(2) Temperatura máxima de todos os dias;");
        printf("\n(3) Maior variação de temperatura de todos os dias;");
        printf("\n(4) SAIR\n");
        scanf("%i", &menu);
        
        if(menu == 1){
            for(i = 0; i < linha; i++){
                printf("\nA temperatura mínima do dia %i é: %.1f", i+1, temperatura[i][0]);
                if(temperatura[i][0] < min){
                    min = temperatura[i][0];
                }
            }
            printf("\nA menor temperatura registrada foi: %.1f", min);
        }
        else if(menu == 2){
            for(i = 0; i < linha; i++){
                printf("\nA temperatura máximo do dia %i é: %.1f", i+1, temperatura[i][1]);
                if(temperatura[i][1] > max){
                    max = temperatura[i][1];
                }
            }
            printf("\nA maior temperatura registrada foi: %.1f", max);
        }
        else if(menu == 3){
            for(i = 0; i < linha; i++){
                variacao = temperatura[i][1] - temperatura[i][0];
                if(variacao > variacaoMax){
                    variacaoMax = variacao;
                }
            }
            printf("\nA maior variação de temperatura foi: %.1f", variacaoMax);
        }
        else if(menu == 4){
            printf("\nPrograma encerrado");
        }
        else{
            printf("\nOpção inválida");
        }
    }while (menu != 4);

    return 0;

}