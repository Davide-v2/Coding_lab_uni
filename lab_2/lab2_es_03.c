#include <stdio.h>

int main(void)
{
    int a, b;

    printf("Inserisci il primo valore: ");
    scanf("%d", &a);
    if(a <= 0)
    {
        printf("Errore!");
        return -1;
    }

    printf("\nInserisci il secondo valore: ");
    scanf("%d", &b);
    if(b <= 0)
    {
        printf("Errore!");
        return -1;
    }

    printf("Il m.c.d. di %d e %d è: ", a, b);

    while (a != b)
    {
        if(a > b)
        {
            a = a-b;
        }
        else
        {
            b = b-a;
        }
    }

    printf("%d\n", a);
    return 0;
}