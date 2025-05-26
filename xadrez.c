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

int main()
{
    // Declarando as variaveis. 
    // "bispo" nao foi inicializado aqui
    // pois faço isso dentro do loop for
    // "i" e "c" serão utilizados para o movimento do cavalo
    int bispo;
    int torre = 0;
    int dama = 0;
    int i, c = 0;

    // Criando o loop For para o movimento do Bispo
    printf("\n***Movimento Do Bispo:\n");
    for(bispo = 0; bispo < 5; bispo++)
    {
        printf("%d - Cima Direita\n", bispo + 1);
    }

    // Criando o loop Do/While para o movimento da Dama
    printf("\n***Movimento Da Dama:\n");
    do
    {
        dama++;
        printf("%d - Esquerda\n", dama);
    }
    while(dama < 8);


    // Criando o loop While para movimento da Torre
    printf("\n***Movimento Da Torre:\n");
    while(torre < 5)
    {
        torre++;
        printf("%d - Direita\n", torre);
    }

    // Loop aninhado para simular a movimentação do Cavalo
    // Loop externo for, interno While
    printf("\n***Movimento Do Cavalo:\n");
    for(i = 0; i < 1; i++)
    {
        while(c < 2)
        {
            printf("Baixo\n");
            c++;
        }
        printf("Esquerda\n");
    }
    
    return 0;
}
