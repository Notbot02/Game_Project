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

    printf("\nVocê ouve um clique e a porta, a norte da sala, se abre.\
            \nAo passar pela porta você percebe que esta do lado de fora da casa.\
            \nA porta se fecha atrás de você, nela há um bilhete..\n");

    printf("\nAo pegar o bilhete você lê:\
           \nEu vou cumprir minha promessa, não importa aonde você for ou onde se esconder. \
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

    printf("Agora você se vê em uma cabana abandonada, rodeada pelas arvores.\
           \nO que você quer fazer?");

    system("PAUSE");
    /*divisor 3
    printf("\nAssim que passou pela porta ela se fechou atras de você.\n");
    printf("\nPara onde você quer olhar agora?\
\nN (Norte) S (Sul) L (leste) O (Oeste)\n");
    chapter3();
    //divisor 3*/

    return 0;
}


//introdução da história

void introduction()
{
   printf("Você abre os olhos. Sua cabeça dói como se tivesse recebido uma pancada.\n\
Seus olhos demoram a se adaptar ao ambiente escuro,\
\nmas logo você percebe que não faz ideia de onde está.\n\ ");
}

