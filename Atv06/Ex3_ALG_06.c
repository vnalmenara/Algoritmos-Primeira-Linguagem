
#include <stdio.h>

int main()
{
    int velocidadeMaxima, velocidadeMotorista;
    
    printf ("Informe a velocidade máxima permitida na via: ");
    scanf ("%i", &velocidadeMaxima);
    
    printf ("Informe a velocidade que o motorista estava trafegando na via: ");
    scanf ("%i", &velocidadeMotorista);
    
    if (velocidadeMotorista<=velocidadeMaxima){
        printf("Você NÃO pagará multa");
    }
    else{
        if (velocidadeMotorista<=velocidadeMaxima+10){ 
          printf("Você pagará R$ 50 de multa");  
        }
        else {
            if (velocidadeMotorista<=velocidadeMaxima+30){
                printf("Você pagará R$ 100 de multa");
            }
            else {
                printf ("Você pagará R$ 200 de multa");
            }
        } 
    }
    
    return 0;

}