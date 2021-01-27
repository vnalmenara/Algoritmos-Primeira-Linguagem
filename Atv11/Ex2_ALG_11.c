
#include <stdio.h>

int main()
{

    int linha, coluna, i, j, equilatero, isoceles, escaleno;
    float percequilatero, percisoceles, percescaleno;
    
    linha = 10;
    coluna = 3;
    equilatero = 0;
    isoceles = 0;
    escaleno = 0;
    
    float triangulo [linha][coluna];
    
    for(i = 0; i < linha; i++){
        for(j = 0; j < coluna; j++){
           
            printf("Para o triângulo %i, digite o valor da %i aresta: ", i+1, j+1);
            scanf("%f", &triangulo[i][j]);
            
        }
    }
    
    printf("              A1   A2   A3");
        
    for(i = 0; i < linha; i++){
        printf("\nTriângulo %i  ", i+1);
        for(j = 0; j < coluna; j++){
            printf("%.1f  ", triangulo[i][j]);
        }
    }
    
    
    for(i = 0; i < linha; i++){
        if(triangulo[i][0] == triangulo[i][1] && triangulo[i][1] == triangulo[i][2]){
            equilatero++;
        }
        else if(triangulo[i][0] == triangulo[i][1] || triangulo[i][1] == triangulo[i][2] || triangulo[i][0] == triangulo[i][2]){
            isoceles++;
        } 
        else{
            escaleno++;
        }
    }
    
    printf("\nVerificou-se %i triângulo(s) equilátero(s), %i isóceles e %i escaleno(s)", equilatero, isoceles, escaleno);
    
    percequilatero = (equilatero * 100) / linha;
    percisoceles = (isoceles * 100) / linha;
    percescaleno = (escaleno * 100) / linha;
    
    printf("\nAssim, há %.1f%% de triângulo(s) equilátero(s), %.1f%% de isóceles e %.1f%% de escaleno(s)", percequilatero, percisoceles, percescaleno);
    
    return 0;

}