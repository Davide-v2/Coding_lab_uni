#include <stdio.h>

int main(void)
{
    int a = 214, b = 128;

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
