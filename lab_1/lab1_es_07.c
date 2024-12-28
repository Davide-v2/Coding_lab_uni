#include <stdio.h>
#include <limits.h>

int main()
{
    int num = INT_MAX;
    //sending num in output
    printf("%d \n\n", num);

    //overflow of num and then sending it in output
    printf("%d", num+1);
    return 0;
}