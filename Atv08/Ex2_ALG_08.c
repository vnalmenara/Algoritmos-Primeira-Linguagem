
#include <stdio.h>

int main()
{
    int menu;
    float saldo, saque, deposito;
    
    saldo = 1000;
    
    do{
        
        printf ("\nEscolha uma opção: (1) Saldo - (2) Saque - (3) Depósito:  ");
        scanf ("%i", & menu);
        
        switch (menu){
            case 1:{
                printf ("Seu saldo é: R$ %.2f", saldo);
            break;
            }
            
            case 2:{
                printf ("Informe o valor que gostaria de sacar: R$ ");
                scanf ("%f", & saque);
                if (saque <= saldo){
                    saldo = saldo - saque;
                    printf ("Saldo suficiente. Total sacado: R$ %.2f\nValor remanescente: R$ %.2f", saque, saldo);
                }
                else{
                    printf ("Saldo Insuficiente. Operação Cancelada");
                }
            break;
            }
            
            case 3:{
                printf ("Informe o valor que gostaria de depositar: R$ ");
                scanf ("%f", & deposito);
                saldo = saldo + deposito;
                printf ("Valor total em conta após o depósito: R$ %.2f", saldo);
            break;
            }
            
            default:{
                printf ("Opção inválida!");
                break;
            }
        }
        
        printf ("\nVocê deseja continuar?  (1) SIM  - (2) NÃO :   ");
        scanf ("%i", & menu);
        
    }while (menu == 1);
    
    printf ("\nPrograma Encerrado");
    
    return 0;

}