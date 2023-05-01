#include <cs50.h>
#include <stdio.h>
#include <math.h>

int main(void)
{
    int inicial;
    do
    {
        inicial = get_int("Tamanho inicial da população: ");
    }
    while (inicial < 9);

    int final;
    do
    {
        final = get_int("Tamanho final da população: ");
    }
    while (final < inicial);

    int anos = 0;

    while (inicial < final)
    {
        inicial += ((inicial / 3) - (inicial / 4));
        anos++;
    }

    // Diz quantos anos demora para a populacao crescer até o valor final
    printf("Years: %i\n", anos);
}
