#include <stdio.h>
#include <ctype.h>

int main(void)
{
    char car;

    printf("Inserisci un carattere: ");
    car = getchar();

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