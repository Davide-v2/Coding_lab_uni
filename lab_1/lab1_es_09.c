#include <stdio.h>

int main(void)
{
    int num_int;
    float num_float;

    printf("Inserisci un numero intero: ");
    scanf("%d", &num_int);

    printf("\nAdesso inserisci un numero float: ");
    scanf("%f", &num_float);

    printf("\n\nIntero: %d \nFloat: %g", num_int, num_float);

    return 0;
}