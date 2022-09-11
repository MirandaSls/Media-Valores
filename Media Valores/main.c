#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main()
{

    int num1, num2;
    float media;
    setlocale(LC_ALL,"portuguese");

    printf("Digite um número: ");
    scanf("%i", &num1);
    printf("Digite um número: ");
    scanf("%i", &num2);

    media = (num1 + num2)/2;

    printf("A media de %i e %i é %f", num1, num2, media);
    return 0;

}
