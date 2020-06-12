#include <stdio.h>
#include "cs50.h"
#include "math.h"
#include "ctype.h"
#include "string.h"
#include "stdlib.h"

void generateCipher(int convertedNumber);

int main(int argc, string argv[])
{

    if (argc == 2)
    {

        for (int i = 0; i < strlen(argv[1]); i++)
        {

            if (!isdigit(argv[1][i]))
            {

                printf("Usage: ./caesar key\n");
                return 1;
            }
        }
    }
    else
    {

        printf("Usage: ./caesar key\n");
        return 1;
    }

    int converted = atoi(argv[1]);
    generateCipher(converted);
}

void generateCipher(int convertedNumber)
{

    string plainText = get_string("plaintext: ");
    printf("ciphertext: ");

    for (int i = 0; i < strlen(plainText); i++)
    {

        if (isupper(plainText[i]))
        {

            printf("%c", (plainText[i] + convertedNumber - 65) % 26 + 65);
        }
        else if (islower(plainText[i]))
        {

            printf("%c", (plainText[i] + convertedNumber - 97) % 26 + 97);
        }
        else
        {

            printf("%c", plainText[i]);
        }
    }

    printf("\n");
}
