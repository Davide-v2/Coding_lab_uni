#include <stdio.h>
#include <ctype.h>

int main(void)
{
    //l'utente inserisc un carattere
    printf("Inserisci un carattere: ");
    char carattere = getchar();
    
    while(carattere != '\n')
    {
        //controllo che carattere sia una lettera
        if(isalpha(carattere))
        {
            if(isupper(carattere))
            {
                printf("\nIl carattere digitato è maiuscolo");
            }

            else 
            {
                printf("\nIl carattere digitato è minuscolo");
            }
        }

        else 
        {
            printf("\nIl carattere digitato non è una lettera");
        }

        printf("\nInserisci un carattere: ");
        char carattere = getchar();
    }

    if(carattere == '\n')
    {
        printf("Arrivederci");
        return 0;
    }
}