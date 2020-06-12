#include <stdio.h>
#include "cs50.h"
#include "math.h"

int getChange(void);

int quarter = 25;
int dime = 10;
int nickel = 5;
int penny = 1;
int counter = 0;

int main(void)
{

    int change = getChange();

    while (change > 0)
    {

        if (change >= quarter)
        {
            change -= quarter;
            counter++;
        }

        else if (change >= dime && change < quarter)
        {
            change -= dime;
            counter++;
        }

        else if (change >= nickel && change < dime)
        {
            change -= nickel;
            counter++;
        }

        else
        {
            change -= penny;
            counter++;
        }
    }

    printf("Coins needed: %i\n", counter);
}

int getChange(void)
{
    float changeInput;

    do
    {
        changeInput = get_float("Change owed: ");
    }

    while (changeInput <= 0);

    int cents = round(changeInput * 100);

    return cents;
}