#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <windows.h>

#include <control.h>
#include <chapterone.h>
#include <chaptertwo.h>
#include <chapterthree.h>

void introduction();

int main()
{
    //linguagem português
    setlocale(LC_ALL, "Portuguese");

    //Titulo do programa
    SetConsoleTitle("Adventure Text: fuga da casa");

    /*for(int i=0; i<2; i++)
    {
        Beep(523.2511,500);
        Beep(543.2211,500);
    }*/

    //divisor 0
    introduction();
    //divisor 0

    //divisor 1
    printf("\nVocê está em um quarto escuro, ao Norte, sentado em uma cama, para onde você quer olhar agora?\n\
N (Norte) S (Sul) L (leste) O (Oeste)\n\ ");
    chapter1();
    chapter1_5();
    //divisor 1


    //divisor 2
    printf("Você destranca a passagem e desce as escadas ao sul.\
\nVocê se depara com diversas estantes de livros e um amontoado de livros caídos no chão.\
\nO ar está empoeirado o que torna difícil respirar.");
    printf("\nPara onde você quer olhar agora?\
\nN (Norte) S (Sul) L (leste) O (Oeste)\n");
    chapter2();
    chapter2_5();
    //divisor 2

    //divisor 3
    printf("\nAgora você está em uma sala mais aberta");
    chapter3();
    //divisor 3

    return 0;
}


//introdução da história

void introduction()
{
   printf("Você abre os olhos. Sua cabeça dói como se tivesse recebido uma pancada.\n\
Seus olhos demoram a se adaptar ao ambiente escuro,\
\nmas logo você percebe que não faz ideia de onde está.\n\ ");
}

