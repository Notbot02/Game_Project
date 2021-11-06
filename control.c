#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

#include <control.h>
#include <chapterone.h>
#include <chaptertwo.h>


void control(char *cont)
{
    char controle;

    fflush(stdin);
    printf("-> ");

    controle = getch();

    switch(controle)
    {
        case 's':
        *cont = controle;
        printf("\n");
        break;

        case 'n':
        *cont = controle;
        printf("\n");
        break;

        case 'l':
        *cont = controle;
        printf("\n");
        break;

        case 'o':
        *cont = controle;
        printf("\n");
        break;

        case 'p':
        *cont = controle;
        printf("\n");
        break;

        case 'i':
        *cont = controle;
        printf("\n");
        break;

        case 'v':
        *cont = controle;
        printf("\n");
        break;

        case 'e':
        *cont = controle;
        printf("\n");
        break;

        default:
        printf("\nAção Incompreensível\n");
        printf("\nPara onde você quer olhar agora?\
\nN (Norte) S (Sul) L (leste) O (Oeste)\n\ ");
        return control(cont);
    }
}
