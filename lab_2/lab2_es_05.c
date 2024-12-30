#include <stdio.h>

int main(void)
{
    int num, somma = 0;

    printf("Inserisci un numero >= di 1: ");
    scanf("%d", &num);

    while(num < 1)
    {
        printf("Inserisci un numero >= di 1: ");
        scanf("%d", &num);
    }

    for(int i=0; i<=num; i++)
    {
        somma = somma+i;
    }

    printf("\nRisultato del for: %d", somma);

    printf("\nRisultato formula: %d", (num*(num+1))/2);

}