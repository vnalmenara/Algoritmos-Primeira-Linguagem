
#include <stdio.h>

int main()
{
    int idade;
    
    printf ("Informe sua idade: ");
    scanf ("%i", &idade);
    
    if (idade >= 5 && idade <= 7){
        printf ("Infantil A");
    }
    else{
        if (idade >= 8 && idade <= 11){
            printf ("Infantil B");
        }
        else{
            if (idade >= 12 && idade <= 13){
                printf ("Juvenil A");
            }
            else{
                if (idade >= 14 && idade <= 17){
                    printf ("Juvenil B");
                }
                else{
                    if (idade >= 18){
                        printf ("Adultos");
                    }
                    else{
                        printf ("Não categorizado");
                    }
                }
            }
        }
    }
    
    return 0;
    
}