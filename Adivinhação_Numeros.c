#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>

/*
Crie um jogo, em C, que sorteia um número entre 1 e 10.
O jogador deve tentar acertar o número sorteado.

Se ele errar, o programa deve dizer se o número sorteado é maior ou menor que o número que o jogador tentou.

Ao acertar o número sorteado, o programa deverá dizer em quantas tentativas o usuário acertou.*/

int main(){
    int t=1;  //tentativas
    int R;    //reinicar o jogo
    int x;    //numero sorteado
    int s;    //suposição

    setlocale(LC_ALL, "Portuguese");

    do{

    printf("........................JOGO DA ADIVINHAÇÃO DOS NÚMEROS........................\n");
    printf("-Tente adivinhar o número decimal de 1 á 10 sorteado pelo computador. Use as dicas disponiveis até acertar.\n\n\n");

    srand( (unsigned)time(NULL) );
    x = 1 + ( rand() % 10 );


    printf("Digite sua suposição: ");
    scanf("%d", &s);
        
        while(s!=x){
            if (s>x){
                printf("\n\nVocê Errou. Que pena... O número misterioso é menor que isso. Tente novamente.\n\n");
                printf("Digite sua suposição: ");
                scanf("%d", &s);
            } else if(s<x){
                printf("\n\nVocê Errou. Que pena... O número misterioso é maior que isso. Tente novamente.\n\n");
                printf("Digite sua suposição: ");
                scanf("%d", &s);
            }
            t++;
        }

        printf("\n\nParabéns!!! Você Acertou na %d° tentativa!!!\n", t);
        printf("...................................................................");

        printf("\n\nDeseja Jogar Novamente? (1)Sim (2)Não\n");
        scanf("%d", &R);
        t=1;

        system("cls");

    }while (R==1);

    system("cls");
    printf("Obrigado por jogar!!!!!!!!!!!!");
    printf("\nBy Amanda Errera de Queiroz.\n\n\n\n\n\n\n\n\n");

   return 0;

}
