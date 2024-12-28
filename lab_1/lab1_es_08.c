#include <stdio.h>
#include <float.h>

int main()
{
    float num = FLT_MIN;
    //sending num in output
    printf("%g \n\n", num);

    //overflow of num and then sending it in output
    printf("%g", num / FLT_MAX);
    return 0;
}