#include <stdio.h>

int main(void) 
{
    printf("******************************************\n");
    printf("* Bem vindo ao nosso jogo de adivinhacao *\n");
    printf("******************************************\n");

    int numerosecreto = 42;

    int chute;
    int tentativas = 1;

    while(1) 
    {

        printf("Tentativa %d\n", tentativas);
        printf("Qual o seu chute? ");

        scanf("%d", &chute);
        printf("Seu chute foi %d\n", chute);

        if(chute < 0) 
        {
            printf("Você nao pode chutar numeros negativos!\n");
            continue;
        }

        int acertou = (chute == numerosecreto);
        int maior = chute > numerosecreto;

        if(acertou) 
        {
            printf("Parabens! Você acertou!\n");
            printf("Jogue de novo, você eh um bom jogador!\n");

            break;
        }

        else if(maior) 
        {
            printf("Seu chute foi maior que o numero secreto\n");
        } 

        else 
        {
            printf("Seu chute foi menor que o numero secreto\n");
        }

        tentativas++;
    }

    printf("Fim de jogo!\n");
    printf("Voce acertou em %d tentativas!", tentativas);

}