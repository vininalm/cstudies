#include<stdio.h>
int calculatesum(int n);

int main()
{
    int x;
    printf("Input the last number of the range starting from 1: ");
    scanf("%i", &x);

    int total = calculatesum(x);

    printf("The sum of numbers from 1 to %i is: %i\n", x, total);
    
}


int calculatesum(int n)
{
    if(n == 1)
        return n;
    else
        return n + calculatesum(n - 1);
}