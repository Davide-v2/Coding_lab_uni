#include <stdio.h>
#include <math.h>

int main(void)
{
    int num_1; int  num_2;

    printf("Inserisci il primo numero: ");
    scanf("%d", &num_1);

    printf("\nInserisci il secondo numero: ");
    scanf("%d", &num_2);

    printf("\n\nSomma: %d", num_1 + num_2);
    printf("\nSottrazione: %d", num_1 - num_2);
    printf("\nProdotto: %d", num_1 * num_2);
    printf("\nDivisione: %d", num_1 / num_2);
    printf("\nResto: %d", num_1 % num_2);

    return 0;
}