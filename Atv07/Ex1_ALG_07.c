
#include <stdio.h>

int main()
{
    int menu;
    float saldo, saque, total_conta, deposito;
    
    saldo = 1000;
    
    printf ("Escolha uma opção: (1) Saldo - (2) Saque - (3) Depósito:  ");
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
                total_conta = saldo - saque;
                printf ("Saldo suficiente. Total sacado: R$ %.2f\nValor remanescente: R$ %.2f", saque, total_conta);
            }
            else{
                printf ("Saldo Insuficiente. Operação Cancelada");
            }
        break;
        }

        case 3:{
            printf ("Informe o valor que gostaria de depositar: R$ ");
            scanf ("%f", & deposito);
            total_conta = saldo + deposito;
            printf ("Valor total em conta após o depósito: R$ %.2f", total_conta);
        break;
        }

        default:{
            printf ("Opção inválida!");
        break;
        }
    }
    return 0;

}