#include <stdio.h>
#include <cs50.h>

/*  -mario simples- */


int main() {

    int i, j, n;

   do
   {
        printf("Digite a altura: ");
        scanf("%d", &n);

   } while (n<1 || n>8);


 if (n<=8){
        for (i = 1; i <= n; i++) {

        for (j = n - i;j >=1; j--){
            printf(" ");

    }

        for (j = 1; j <= i; j++){

            printf("#");
        }

        printf("\n");
    }
 } 
}
