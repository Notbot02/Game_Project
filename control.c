#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

#include <control.h>
#include <chapterone.h>
#include <chaptertwo.h>
#include <chapterthree.h>


void control(char *cont)
{
    char controle;

    fflush(stdin);
    printf("-> ");
    scanf("%c", &cont);

    switch(*cont)
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
        return control(cont);
    }

    return 1;
}
