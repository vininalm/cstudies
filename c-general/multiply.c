#include <stdio.h>

int main(void) 
{
    int x;
    int y;

    printf("Digite as sua primeira variavel: ");
    scanf("%d", &x);

    printf("Digite a sua segunda variavel: ");
    scanf("%d", &y);

    printf("O resultado da multiplicacao eh: %d\n", x * y);
}