#include <stdio.h>

int main()
{
    int a;
    int b;

    for (a = 1; a < 10; a++)
    {

        for (b = 1; b < 10; b++)
        {
            printf("%4d", a * b);
        }

        printf("\n");
    }
    return 0;
}