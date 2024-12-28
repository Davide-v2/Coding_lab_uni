#include <stdio.h>
#include <math.h>

int main(void)
{
    double num_1; double  num_2;

    printf("Inserisci il primo numero: ");
    scanf("%lf", &num_1);

    printf("\nInserisci il secondo numero: ");
    scanf("%lf", &num_2);

    printf("\n\nSomma: %g", num_1 + num_2);
    printf("\nSottrazione: %g", num_1 - num_2);
    printf("\nProdotto: %g", num_1 * num_2);
    printf("\nDivisione: %g", num_1 / num_2);
    printf("\nResto: %g", num_1 % num_2);

    return 0;
}