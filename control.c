#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

#include <control.h>
#include <chapterone.h>
#include <chaptertwo.h>

char controle;

void control()
{
    fflush(stdin);
    printf("-> ");
    scanf("%c", &controle);

    switch(controle)
    {
        case 's':
        printf("\n");
        break;

        case 'n':
        printf("\n");
        break;

        case 'l':
        printf("\n");
        break;

        case 'o':
        printf("\n");
        break;

        case 'p':
        printf("\n");
        break;

        case 'i':
        printf("\n");
        break;

        case 'v':
        printf("\n");
        break;

        case 'e':
        printf("\n");
        break;

        default:
        printf("\nAção Incompreensível\n");
        return control();
    }

    return 1;
}
