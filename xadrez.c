/*
    Desafio: Movimentando as Peças do xadrez
    -Representar o movimento das peças utilizando as 3 estruturas de repetição que estao sendo
     estudadas: While, For e Do/While
    -Dama(Do/While) - oito casas a esquerda
    -Torre(While) - cinco casas a direita
    -Bispo(For) - cinco casas na diagonal(cima direita)

    -Exibir o movimento de cada peça na tela 
*/

#include<stdio.h>

void movDama(int n)
{
    if(n > 0)
    {
        printf("Esquerda\n");
        movDama(n - 1);
    }
}

void movTorre(int n)
{
    if(n > 0)
    {
        printf("Direita\n");
        movTorre(n - 1);
    }
}

void movBispo(int n)
{
    if(n > 0)
    {
        for(int i = 0; i < 1; i++)
        {
            for(int c = 0; c < 1; c++)
            {
                printf("Direita\n");
            }
            printf("Cima\n");
        }
        movBispo(n - 1);
    }
}

void movCavalo(int n)
{
    int c = 0;
    for(n = 0; n < 1; n++)
    {
        while(c < 2)
        {
            printf("Cima\n");
            c++;
        }
        printf("Direita\n");
    }
}

int main()
{
    int d = 8;
    int t = 5;
    int b = 5;
    int c = 1;

    printf("*Movimento da Dama:\n");
    movDama(d);

    printf("\n*Movimento da Torre:\n");
    movTorre(t);

    printf("\n*Movimento do Bispo:\n");
    movBispo(b);

    printf("\n*Movimento do Cavalo:\n");
    movCavalo(c);

    return 0;
}
