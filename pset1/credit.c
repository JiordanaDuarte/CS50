#include <cs50.h>
#include <stdio.h>
#include <math.h>

int main(void)
{
    long numero = get_long("Número: ");
    
    // Cria cópia
    long cartao = numero;

    if (cartao < 1000000000000 || cartao > 9999999999999999 || (cartao >= 10000000000000 && cartao <= 99999999999999))
    {
        printf("INVALID\n");
    }
    else
    {
        int soma = 0;

        int posicao = 0;

        while (cartao > 0)
        {
            int digito = cartao % 10;
            
            if (posicao % 2 == 0)
            {
                soma += digito;
            }
            
            else
            {
                digito *= 2;

                if (digito >= 10)
                {
                    soma += digito % 10;
                    soma++;
                }
                else
                {
                    soma += digito;
                }
            }

            cartao = cartao / 10;
            posicao++;
        }
        if (soma % 10 == 0)
        {
            if (posicao == 13)
            {
                numero = numero / 1000000000000;

                if (numero == 4)
                {
                    printf("VISA\n");
                }
                else
                {
                    printf("INVALID\n");
                }
            }

            else if (posicao == 15)
            {
                numero = numero / 10000000000000;

                if (numero == 34 || numero == 37)
                {
                    printf("AMEX\n");
                }
                else
                {
                    printf("INVALID\n");
                }
            }

            else
            {
                numero = numero / 100000000000000;

                if (numero >= 40 && numero < 50)
                {
                    printf("VISA\n");
                }
                else if (numero > 50 && numero <= 55)
                {
                    printf("MASTERCARD\n");
                }
                else
                {
                    printf("INVALID\n");
                }
            }
        }
        
        else
        {
            printf("INVALID\n");
        }
    }
}
