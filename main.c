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
    //linguagem portugu�s
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
    printf("\nVoc� est� em um quarto escuro, ao Norte, sentado em uma cama, para onde voc� quer olhar agora?\n\
N (Norte) S (Sul) L (leste) O (Oeste)\n\ ");
    chapter1();
    chapter1_5();
    //divisor 1


    //divisor 2
    printf("Voc� destranca a passagem e desce as escadas ao sul.\
\nVoc� se depara com diversas estantes de livros e um amontoado de livros ca�dos no ch�o.\
\nO ar est� empoeirado o que torna dif�cil respirar.");
    printf("\nPara onde voc� quer olhar agora?\
\nN (Norte) S (Sul) L (leste) O (Oeste)\n");
    chapter2();
    chapter2_5();
    //divisor 2

    printf("\nVoc� ouve um clique e a porta, a norte da sala, se abre.\
            \nAo passar pela porta voc� percebe que esta do lado de fora da casa.\
            \nA porta se fecha atr�s de voc�, nela h� um bilhete..\n");

    printf("\nAo pegar o bilhete voc� l�:\
           \nEu vou cumprir minha promessa, n�o importa aonde voc� for ou onde se esconder. \
           \nEu vou te encontrar e te aprisionar assim como fez comigo.");

printf("                                      /\\                                        \n");
printf("                                 /\\  //\\\\                                     \n");
printf("                          /\\    //\\\\///\\\\\\\        /\\                     \n");
printf("                         //\\\\  ///\\///  \\\\\\  /\\  //\\\\                   \n");
printf("            /\\          /  ^ \\/^ ^/^  ^  ^ \\/^ \\/  ^ \\                      \n");
printf("           / ^\\    /\\  / ^   /  ^/ ^ ^ ^   ^\\ ^/  ^^  \\                      \n");
printf("          /^   \\  / ^\\/ ^ ^   ^ / ^  ^    ^  \ / ^   ^  \\       _             \n");
printf("         /  ^ ^ \\/^  ^\\ ^ ^ ^   ^  ^   ^   ____  ^   ^  \\     /|\\            \n");
printf("        / ^ ^  ^ \\ ^  _\\___________________|  |_____^ ^  \\   /|||\\           \n");
printf("       / ^^  ^ ^ ^\\  /______________________________\\ ^ ^ \\ /|||||\\          \n");
printf("      /  ^  ^^ ^ ^  /________________________________\\  ^  /|||||||\\           \n");
printf("     /^ ^  ^ ^^  ^    ||___|___||||||||||||___|__|||      /|||||||||\\           \n");
printf("    / ^   ^   ^    ^  ||___|___||||||||||||___|__|||          | |                \n");
printf("   / ^ ^ ^  ^  ^  ^   ||||||||||||||||||||||||||||||oooooooooo| |ooooooo         \n");
printf("   ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo         \n");

    printf("Agora voc� se v� em uma cabana abandonada, rodeada pelas arvores.\
           \nO que voc� quer fazer?");

    system("PAUSE");
    /*divisor 3
    printf("\nAssim que passou pela porta ela se fechou atras de voc�.\n");
    printf("\nPara onde voc� quer olhar agora?\
\nN (Norte) S (Sul) L (leste) O (Oeste)\n");
    chapter3();
    //divisor 3*/

    return 0;
}


//introdu��o da hist�ria

void introduction()
{
   printf("Voc� abre os olhos. Sua cabe�a d�i como se tivesse recebido uma pancada.\n\
Seus olhos demoram a se adaptar ao ambiente escuro,\
\nmas logo voc� percebe que n�o faz ideia de onde est�.\n\ ");
}

