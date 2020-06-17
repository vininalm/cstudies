#include <stdio.h>

int main(void) 
{
   int sum = 0;
   int input;

   printf("Insira o numero\n");
   scanf("%d", &input);

   for(int i = 1; i <= input; i++)
   {
       sum += i;
   }

   printf("Sum is: %d", sum);
}