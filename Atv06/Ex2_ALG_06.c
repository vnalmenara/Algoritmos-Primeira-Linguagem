
#include <stdio.h>

int main()
{
    int ano, anosfaltantes, proximoBissexto;
    
    printf ("Informe um ano d.C a ser verificado: ");
    scanf ("%i", &ano);
    
    if (ano%4==0){ 
        if (ano%100!=0 || ano%400==0){ 
            printf("O ano é bissexto");
        }
        else{
            printf ("O ano NÃO é bissexto");
            anosfaltantes = 4;
            printf ("\nFaltam 4 anos para o próximo ano bissexto, sendo este %i", ano+anosfaltantes);
        }
    }
    else{ 
        if (ano%4==1){
            anosfaltantes = 3;
            proximoBissexto = ano+anosfaltantes;
            if (proximoBissexto%100!=0 || proximoBissexto%400==0){
                printf ("Faltam 3 anos para o próximo ano bissexto, sendo este %i", proximoBissexto);
            }
            else{
                printf ("Faltam 7 anos para o próximo ano bissexto, sendo este %i", proximoBissexto+4);
            }
        }
        else{
            if (ano%4==2){
                anosfaltantes = 2;
                proximoBissexto = ano+anosfaltantes;
                if (proximoBissexto%100!=0 || proximoBissexto%400==0){
                    printf ("Faltam 2 anos para o próximo ano bissexto, sendo este %i", proximoBissexto);
                }
                else{
                    printf ("Faltam 6 anos para o próximo ano bissexto, sendo este %i", proximoBissexto+4);
                }
            }
            else{
                anosfaltantes = 1;
                proximoBissexto = ano+anosfaltantes;
                if (proximoBissexto%100!=0 || proximoBissexto%400==0){
                    printf ("Falta 1 ano para o próximo ano bissexto, sendo este %i", proximoBissexto);
                }
                else{
                    printf ("Faltam 5 anos para o próximo ano bissexto, sendo este %i", proximoBissexto+4);
                }
            }
        }
    
    }
    return 0;

}