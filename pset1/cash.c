#include <cs50.h>
#include <stdio.h>
#include <math.h>

int min_moedas(int n);

int main(void)
{
    float valor;
    do
    {
        valor = get_float("Valor de troca: ");
    }
    while (valor < 0);

    int centavos = round(valor * 100);
    
    int minimo = min_moedas(centavos);
    
    printf("%i\n", minimo);
}


int min_moedas(int n)
{
    int moedas = 0;
    
    int valores[] = {25, 10, 5, 1};
    
    for (int i = 0; i < 4; i++)
    {
        moedas += n / valores[i];
        
        n -= n / valores[i] * valores[i];
    }
    
    return moedas;
}
