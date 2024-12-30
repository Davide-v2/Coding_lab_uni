#include <stdio.h>
#include <math.h>

int main(void)
{
    // ax^2 + bx + c = 0

    double a, b, c, discriminante, valore_1, valore_2;

    printf("Inserisci il valore a: ");
    scanf("%lf", &a);

    //controllo che a sia diverso da 0
    while(a == 0)
    {
        printf("Inserisci il valore a: ");
        scanf("%lf", &a);
    }

    printf("Inserisci il valore di b: ");
    scanf("%lf", &b);

    printf("Inserisci il valore di c: ");
    scanf("%lf", &c);

    //si usa la formula per calcolare la discriminante
    discriminante = (pow(b,2))-(4*a*c);

    printf("\nLa discriminante vale %g", discriminante);

    //controllare se discriminante <=> 0 e in base a risultato dare output corretto
    if(discriminante < 0)
    {
        printf("\nLa funzione non ha risultati nell'insieme R");
    }
    else if(discriminante == 0)
    {
        valore_1 = (-b+sqrt(discriminante))/(2*a);
        valore_2 = (-b-sqrt(discriminante))/(2*a); 
        printf("\nLa funzione ha due valori opposti: %g e %g", valore_1, valore_2);   
    }
    else if(discriminante > 0)
    {
        valore_1 = (-b+sqrt(discriminante))/(2*a);
        valore_2 = (-b-sqrt(discriminante))/(2*a); 
        printf("\nLa funzione ha due valori: %g e %g", valore_1, valore_2);
    }
    return 0;
}