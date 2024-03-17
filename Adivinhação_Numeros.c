#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>

/*
Crie um jogo, em C, que sorteia um n�mero entre 1 e mil.
O jogador deve tentar acertar o n�mero sorteado.

Se ele errar, o programa deve dizer se o n�mero sorteado � maior ou menor que o n�mero que o jogador tentou.

Ao acertar o n�mero sorteado, o programa dever� dizer em quantas tentativas o usu�rio acertou.*/

int main(){
    int t=1;  //tentativas
    int R;    //reinicar o jogo
    int x;    //numero sorteado
    int s;    //suposi��o

    setlocale(LC_ALL, "Portuguese");

    do{

    printf("........................JOGO DA ADIVINHA��O DOS N�MEROS........................\n");
    printf("-Tente adivinhar o n�mero decimal de 1 � 10 sorteado pelo computador. Use as dicas disponiveis at� acertar.\n\n\n");

    srand( (unsigned)time(NULL) );
    x = 1 + ( rand() % 10 );


    printf("Digite sua suposi��o: ");
    scanf("%d", &s);

    if(s==x){
        printf("\n\nParab�ns!!! Voc� Acertou na 1� tentativa!!!\n");
    }else{
        while(s!=x){
            if (s>x){
                printf("\n\nVoc� Errou. Que pena... O n�mero misterioso � menor que isso. Tente novamente.\n\n");
                printf("Digite sua suposi��o: ");
                scanf("%d", &s);
            } else if(s<x){
                printf("\n\nVoc� Errou. Que pena... O n�mero misterioso � maior que isso.\n\n");
                printf("Digite sua suposi��o: ");
                scanf("%d", &s);
            }
            t++;
        }

        printf("\n\nParab�ns!!! Voc� Acertou na %d� tentativa!!!\n", t);
    }
        printf("...................................................................");

        printf("\n\nDeseja Jogar Novamente? (1)Sim (2)N�o\n");
        scanf("%d", &R);
        t=1;

        system("cls");

    }while (R==1);

    system("cls");
    printf("Obrigado por jogar!!!!!!!!!!!!");
    printf("\nBy Amanda Errera de Queiroz.\n\n\n\n\n\n\n\n\n");

   return 0;

}
