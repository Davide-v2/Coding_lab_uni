#include <stdio.h>
#include <ctype.h>

int main(void)
{
    char car;
    int scelta;

    printf("Inserisci un carattere: ");
    car = getchar();

    printf("\nScegliere conversione \n1)Maiuscolo \n2)Minuscolo\n\n");
    scanf("%d", &scelta);

    if(scelta == 1)
    {
        if(isalpha(car))
        {
            car = toupper(car);
            printf("\n\n%c", car);
            return 0;
        }

        else
        {
            printf("\n\n%c", car);
            return 0;
        }
    }
    else if(scelta == 2)
    {
        if(isalpha(car))
        {
            car = tolower(car);
            printf("\n\n%c", car);
            return 0;
        }

        else
        {
            printf("\n\n%c", car);
            return 0;
        }
    }
}