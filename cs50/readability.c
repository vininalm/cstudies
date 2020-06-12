#include <stdio.h>
#include "cs50.h"
#include "math.h"
#include "ctype.h"
#include "string.h"
#include "stdlib.h"

int letterCounter(char *c);
int wordCounter(char *c);
int sentenceCounter(char *c);
float calculateEquationVariables(int denominator, int numberOfWords);
void calculateLiauIndex(float equationL, float equationS);

int main(void)
{

    string text = get_string("Text: ");

    int numberOfWords = wordCounter(text);
    int numberOfLetters = letterCounter(text);
    int numberOfSentences = sentenceCounter(text);

    float equationL = calculateEquationVariables(numberOfLetters, numberOfWords);
    float equationS = calculateEquationVariables(numberOfSentences, numberOfWords);

    calculateLiauIndex(equationL, equationS);
}

// counts the number of letters in the text

int letterCounter(char *c)
{

    int counter = 0;

    for (int i = 0; i < strlen(c); i++)
    {
        if ((c[i] >= 'A' && c[i] <= 'Z') || (c[i] >= 'a' && c[i] <= 'z'))
        {
            counter++;
        }
    }

    return counter;
}

// counts the number of words in the text

int wordCounter(char *c)
{

    int counter = 0;

    for (int i = 0; i < strlen(c); i++)
    {
        if (c[i] == 32)
        {
            counter++;
        }
    }

    return counter + 1;
}

// counts the number of sentences in the text

int sentenceCounter(char *c)
{
    int counter = 0;

    for (int i = 0; i < strlen(c); i++)
    {
        if (c[i] == 33 || c[i] == 46 || c[i] == 63)
        {
            counter++;
        }
    }
    
    return counter;
}


float calculateEquationVariables(int denominator, int numberOfWords)
{

    float result = (float)denominator * 100 / numberOfWords;
    return result;
}

// calculates the index of the Coleman-Lieu equation, verifies the range and prints the grade level

void calculateLiauIndex(float equationL, float equationS)
{
    float index = (0.0588 * equationL) - (0.296 * equationS) - 15.8;

    if (roundf(index) < 1)
    {
        printf("Before Grade 1\n");
    }
    else if (roundf(index) > 16)
    {
        printf("Grade 16+\n");
    }
    else
    {
        printf("Grade %.0f\n", roundf(index));
    }
}