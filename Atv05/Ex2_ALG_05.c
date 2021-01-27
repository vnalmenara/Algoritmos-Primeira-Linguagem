
#include <stdio.h>

int main()
{
    float num1, num2, resultado;
    int operacao_mat;
    
    printf ("Informe o primeiro número da expressão: ");
    scanf ("%f", &num1);
    
    printf ("Informe o segundo número da expressão: ");
    scanf ("%f", &num2);
    
    printf ("Insira o comando para realizar a operação. \nPara isso considere: (1) SOMA, (2) SUBTRAÇÃO, (3) MULTIPLICAÇÃO ou (4) DIVISÃO: ");
    scanf ("%i", &operacao_mat);
    
    if (operacao_mat == 1){
        resultado = num1 + num2;
        printf ("Seu resultado é: %.2f", resultado);
    }
    else{
        if (operacao_mat == 2){
            resultado = num1 - num2;
            printf ("Seu resultado é: %.2f", resultado);
        }
        else{
            if (operacao_mat == 3){
                resultado = num1 * num2;
                printf ("Seu resultado é: %.2f", resultado);
            }
            else{
                if (operacao_mat == 4){
                    resultado = num1 / num2;
                    printf ("Seu resultado é: %.2f", resultado);
                }
            }
            
        }
    }
    return 0;

}