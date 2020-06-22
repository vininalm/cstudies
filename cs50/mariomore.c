#include <stdio.h>
#include "cs50.h"

int main(void)
{
    int n;
    do
    {
        n = get_int("Height: ");
    } while (n < 1 || n > 8);

    for (int row = 0; row < n; row++)
    {
        for (int i = n - 1; i > row; i--)
        {
            printf(" ");
        }

        for (int column = 0; column <= row; column++)
        {

            printf("#");
        }

        printf("  ");

        for (int x = 0; x <= row; x++)
        {
            printf("#");
            
        }

        printf("\n");
    }
}