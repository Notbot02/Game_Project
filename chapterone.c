#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

#include <control.h>
#include <chapterone.h>

#define TAM 20

void Puzzle1()
{
    char aux;

    char resposta_correta[TAM] = "vinganca";
    char resposta[TAM];

    printf("\n-> ");

    scanf("%s", &resposta);

    if(strcmp (resposta, resposta_correta) == 0)
    {
        /*for(int i=0; i<2; i++)
        {
           Beep(523.2111,516);
           Beep(563.2211,552);
        }*/

        printf("\nVoc� conseguiu destrancar a passagem.\n");
    }
    else
    {
        printf("\nA tranca ainda est� trancada.");
        printf("\nVoc� quer tentar denovo?\n\
N(N�o) S(Sim)\n");

        do
        {
            control(&aux);

        if(aux == 's')
        {
            return Puzzle1();
        }
        if(aux == 'n')
        {
            printf("\nPara onde voc� quer olhar agora?\
\nN (Norte) S (Sul) L (leste) O (Oeste)\n\ ");
            return chapter1();
        }
        else
        {
            printf("\nA��o Incompreens�vel\n");
        }

        }while(aux != 's' && aux != 'n');
    }
}

void openarq()
{
    FILE *newarq;
    char escreve[TAM];

    newarq = fopen("Peda�o de papel.txt", "w+");

    if (newarq == NULL)
    {

    }
    else
    {

        fputs("quem cometer iNjusti�a receber� de voltA\n\
iNjustI�a, e n�o haVer� exce��o pAra ninGu�m.\n\
                                colossenses 3:25", newarq);


        fclose(newarq);
    }

}


void chapter1()
{
    char aux;

    control(&aux);

    if(aux == 'n')
    {
        printf("\nAo olhar para o norte voc� v� a cama na qual acordou");
        printf("\nVoc� pode investig�-la ou ainda continuar vasculhando o quarto.\
\nO que voc� quer fazer?\n\
\nI (Investigar) V (Vasculhar)\n");

printf("      ----------_____________________________----------     \n");
printf("               |  .                          |    .         \n");
printf("            .  |                             |              \n");
printf("               |                             |              \n");
printf("               |                      .      |              \n");
printf("               |             .               |              \n");
printf("               |                             |    :         \n");
printf("      .        |                        :    |              \n");
printf("               |  ____                       |              \n");
printf("               | (____)~~~~~~~~~~~~~~        |              \n");
printf("               | |__________________|        |              \n");
printf("           :   |_||________________||________|              \n");
printf("              /                               \\            \n");
printf("             /                                 \\   .       \n");
printf("      .     /                                   \\          \n");
printf("           /                                     \\         \n");
printf("          /                                       \\        \n");
printf("         /                                         \\       \n");
printf("        /                                           \\      \n");
printf("       /                                             \\     \n");

        do
        {
            control(&aux);

        if(aux == 'i')
        {
            printf("Ao investigar a cama, voc� encontra um papel amassado.\
\nH� algo escrito nele. Voc� guarda o papel com voc�, voc� dever� l�-lo!\n");
            openarq();
            printf("\nPara onde voc� quer olhar agora?\
\nN (Norte) S (Sul) L (leste) O (Oeste)\n\ ");
        }
        else if(aux == 'v')
        {
            printf("\nContinuar vasculhando");
            printf("\nPara onde voc� quer olhar agora?\
\nN (Norte) S (Sul) L (leste) O (Oeste)\n\ ");
            return chapter1();
        }
        else
        {
            printf("\nA��o Incompreens�vel\n");
        }

        }while(aux != 'i' && aux != 'v');
    }

    else if(aux == 's')
    {
        printf("\nAo olhar para o sul voc� v� um al�ap�o.\n\
Voc� pode investig�-lo ou ainda continuar vasculhando o quarto.\
\nO que voc� quer fazer?\
\nI (Investigar) ou V (vasculhar)\n");

printf("      ----------_____________________________----------     \n");
printf("               |                             |              \n");
printf("               |  .                          |              \n");
printf("               |                             |              \n");
printf("            .  |                      .      |              \n");
printf("               |                             |              \n");
printf("               |                             |     :        \n");
printf("               |        :                    |              \n");
printf("               |                             |              \n");
printf("         .     |                             |              \n");
printf("               |                  .          |              \n");
printf("               |_____________________________|              \n");
printf("              /                               \\      .     \n");
printf("             /            _________            \\           \n");
printf("            /            /         \\           \\          \n");
printf("           /            /   ;---:   \\           \\         \n");
printf("          /            /_____________\\           \\        \n");
printf("         /             '''''''''''''''             \\       \n");
printf("        /                                           \\      \n");
printf("       /                                             \\     \n");


        do{
        control(&aux);

        if(aux == 'i')
        {
            printf("\nO al�ap�o est� bloqueado por uma trava. Nesta trava h� uma sequ�ncia de bot�es girat�rios com letras.");
            printf("\nVoc� pode escrever uma senha ou ainda continuar vasculhando o quarto. O que voc� quer fazer?\
\nE (escrever senha) ou V (vasculhar)\n");

            do
            {
            control(&aux);
            if(aux == 'e')
            {
                Puzzle1();
                break;
            }
            else if(aux == 'v')
            {
            printf("\nContinuar vasculhando");
            printf("\nPara onde voc� quer olhar agora?\
\nN (Norte) S (Sul) L (leste) O (Oeste)\n\ ");
            return chapter1();
            }
            else
            {
                printf("\nA��o Incompreens�vel\n");
            }
            }while(aux != 'e' && aux != 'v');
        }
        else if(aux == 'v')
        {
            printf("\nContinuar vasculhando");
            printf("\nPara onde voc� quer olhar agora?\
\nN (Norte) S (Sul) L (leste) O (Oeste)\n\ ");
            return chapter1();
        }
        else
        {
            printf("\nA��o Incompreens�vel\n");
        }
        break;

    }while(aux != 'i' && aux != 'v');
    }

    else if(aux == 'l')
    {

printf("      ----------_____________________________----------     \n");
printf("               |                             |              \n");
printf("               |                             |  .           \n");
printf("               |    .                        |              \n");
printf("          :    |         .--------.          |              \n");
printf("               |        (  |    |  )         |              \n");
printf("               |         '--------'          |        .     \n");
printf("               |                             |              \n");
printf("               |        .                    |              \n");
printf("       :       |                        :    |              \n");
printf("            .  |                             |              \n");
printf("               |_____________________________|     .        \n");
printf("              /                               \\            \n");
printf("             /                                 \\           \n");
printf("            /                                   \\          \n");
printf("           /                                     \\         \n");
printf("          /                                       \\        \n");
printf("         /                                         \\       \n");
printf("        /                                           \\      \n");
printf("       /                                             \\     \n");

        printf("\nVoc� v� uma pequena janela redonda, mas a vis�o esta bloqueada por tabuas de madeira do lado de fora.\n");
        printf("\nPara onde voc� quer olhar agora?\
\nN (Norte) S (Sul) L (leste) O (Oeste)\n\ ");

        return chapter1();
    }
    else if(aux == 'o')
    {
printf("      ----------_____________________________----------     \n");
printf("               |                             |              \n");
printf("               |               .             |              \n");
printf("               |   .                         |              \n");
printf("       :       |                             |   :          \n");
printf("               |                             |              \n");
printf("               |           _______     .     |              \n");
printf("            .  |          |  xxx  |          |              \n");
printf("     .         |      ____|___ ___|__        |     .        \n");
printf("               |     |        |      |       |              \n");
printf("               |     |  xxxx  |  xx  |       |              \n");
printf("               |_____|________|______|_______|              \n");
printf("        .     /                               \\            \n");
printf("             /                                 \\     .     \n");
printf("            /                                   \\          \n");
printf("           /                                     \\         \n");
printf("          /                                       \\        \n");
printf("         /                                         \\       \n");
printf("        /                                           \\      \n");
printf("       /                                             \\     \n");

        printf("\nVoc� v� algumas caixas vazias.\n");
        printf("\nPara onde voc� quer olhar agora?\
\nN (Norte) S (Sul) L (leste) O (Oeste)\n\ ");
        return chapter1();
    }
    else
    {
        printf("\nA��o Incompreens�vel\n");
        printf("\nPara onde voc� quer olhar agora?\
\nN (Norte) S (Sul) L (leste) O (Oeste)\n\ ");
        return chapter1();
    }
}

void chapter1_5()
{
    char auxi;

    control(&auxi);

    if(auxi == 'n')
    {

printf("      ----------_____________________________----------     \n");
printf("               |  .                          |    .         \n");
printf("            .  |                             |              \n");
printf("               |                             |              \n");
printf("               |                      .      |              \n");
printf("               |             .               |              \n");
printf("               |                             |    :         \n");
printf("      .        |                        :    |              \n");
printf("               |  ____                       |              \n");
printf("               | (____)~~~~~~~~~~~~~~        |              \n");
printf("               | |__________________|        |              \n");
printf("           :   |_||________________||________|              \n");
printf("              /                               \\            \n");
printf("             /                                 \\   .       \n");
printf("      .     /                                   \\          \n");
printf("           /                                     \\         \n");
printf("          /                                       \\        \n");
printf("         /                                         \\       \n");
printf("        /                                           \\      \n");
printf("       /                                             \\     \n");

        printf("\nN�o h� mais nada aqui");
        printf("\nPara onde voc� quer olhar agora?\
\nN (Norte) S (Sul) L (leste) O (Oeste)\n\ ");

        return chapter1_5();
    }

    else if(auxi == 's')
    {

printf("      ----------_____________________________----------     \n");
printf("               |                             |              \n");
printf("               |  .                          |              \n");
printf("               |                             |              \n");
printf("            .  |                      .      |              \n");
printf("               |                             |              \n");
printf("               |                             |     :        \n");
printf("               |        :                    |              \n");
printf("               |                             |              \n");
printf("         .     |                             |              \n");
printf("               |                  .          |              \n");
printf("               |_____________________________|              \n");
printf("              /                               \\      .     \n");
printf("             /            _________            \\           \n");
printf("            /            /         \\           \\          \n");
printf("           /            /   ;---:   \\           \\         \n");
printf("          /            /_____________\\           \\        \n");
printf("         /             '''''''''''''''             \\       \n");
printf("        /                                           \\      \n");
printf("       /                                             \\     \n");

        printf("\nAo olhar para o sul voc� v� um al�ap�o.\n\
Voc� pode investig�-lo ou ainda continuar vasculhando o quarto.\
\nO que voc� quer fazer?\
\nI (Investigar) ou V (vasculhar)\n");


        do{
        control(&auxi);

        if(auxi == 'i')
        {
            printf("\nO al�ap�o est� bloqueado por uma trava. Nesta trava h� uma sequ�ncia de bot�es girat�rios com letras.");
            printf("\nVoc� pode escrever uma senha ou ainda continuar vasculhando o quarto. O que voc� quer fazer?\
\nE (escrever senha) ou V (vasculhar)\n");

            do
            {
            control(&auxi);
            if(auxi == 'e')
            {
                Puzzle1();
                break;
            }
            else if(auxi == 'v')
            {
            printf("\nContinuar vasculhando");
            printf("\nPara onde voc� quer olhar agora?\
\nN (Norte) S (Sul) L (leste) O (Oeste)\n\ ");
            return chapter1();
            }
            else
            {
                printf("\nA��o Incompreens�vel\n");
            }
            }while(auxi != 'e' && auxi != 'v');
        }
        else if(auxi == 'v')
        {
            printf("\nContinuar vasculhando");
            printf("\nPara onde voc� quer olhar agora?\
\nN (Norte) S (Sul) L (leste) O (Oeste)\n\ ");
            return chapter1();
        }
        else
        {
            printf("\nA��o Incompreens�vel\n");
        }
        break;

    }while(auxi != 'i' && auxi != 'v');
    }

    else if(auxi == 'l')
    {

printf("      ----------_____________________________----------     \n");
printf("               |                             |              \n");
printf("               |                             |  .           \n");
printf("               |    .                        |              \n");
printf("          :    |         .--------.          |              \n");
printf("               |        (  |    |  )         |              \n");
printf("               |         '--------'          |        .     \n");
printf("               |                             |              \n");
printf("               |        .                    |              \n");
printf("       :       |                        :    |              \n");
printf("            .  |                             |              \n");
printf("               |_____________________________|     .        \n");
printf("              /                               \\            \n");
printf("             /                                 \\           \n");
printf("            /                                   \\          \n");
printf("           /                                     \\         \n");
printf("          /                                       \\        \n");
printf("         /                                         \\       \n");
printf("        /                                           \\      \n");
printf("       /                                             \\     \n");

        printf("\nVoc� v� uma pequena janela redonda, mas a vis�o esta bloqueada por tabuas de madeira do lado de fora.\n");
        printf("\nPara onde voc� quer olhar agora?\
\nN (Norte) S (Sul) L (leste) O (Oeste)\n\ ");
        return chapter1();
    }
    else if(auxi == 'o')
    {

printf("      ----------_____________________________----------     \n");
printf("               |                             |              \n");
printf("               |               .             |              \n");
printf("               |   .                         |              \n");
printf("       :       |                             |   :          \n");
printf("               |                             |              \n");
printf("               |           _______     .     |              \n");
printf("            .  |          |  xxx  |          |              \n");
printf("     .         |      ____|___ ___|__        |     .        \n");
printf("               |     |        |      |       |              \n");
printf("               |     |  xxxx  |  xx  |       |              \n");
printf("               |_____|________|______|_______|              \n");
printf("        .     /                               \\            \n");
printf("             /                                 \\     .     \n");
printf("            /                                   \\          \n");
printf("           /                                     \\         \n");
printf("          /                                       \\        \n");
printf("         /                                         \\       \n");
printf("        /                                           \\      \n");
printf("       /                                             \\     \n");

        printf("\nVoc� v� algumas caixas vazias.\n");
        printf("\nPara onde voc� quer olhar agora?\
\nN (Norte) S (Sul) L (leste) O (Oeste)\n\ ");
        return chapter1();
    }
    else
    {
        printf("\nA��o Incompreens�vel\n");
        printf("\nPara onde voc� quer olhar agora?\
\nN (Norte) S (Sul) L (leste) O (Oeste)\n\ ");
        return chapter1();
    }

    //pausar a tela
    printf("\n");
    system("PAUSE");
    //limpar tela
    system("cls");
}
