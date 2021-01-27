
#include <stdio.h>

int main()
{
    float a, b, c, media_ponderada;

    printf("Por favor, informe valor para \"a\":");
    scanf("%f", &a);

    printf("Por favor, informe valor para \"b\":");
    scanf("%f", &b);

    printf("Por favor, informe valor para \"c\":");
    scanf("%f", &c);

    media_ponderada = ((a * 2) + (b * 3) + (c * 5)) / 10;

    printf("Sr.(a), a Média Ponderada é: %.2f", media_ponderada);

    return 0;
}
