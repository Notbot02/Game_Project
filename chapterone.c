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

        printf("\nVocê conseguiu destrancar a passagem.\n");
    }
    else
    {
        printf("\nA tranca ainda está trancada.");
        printf("\nVocê quer tentar denovo?\n\
N(Não) S(Sim)\n");

        do
        {
            control(&aux);

        if(aux == 's')
        {
            return Puzzle1();
        }
        if(aux == 'n')
        {
            printf("\nPara onde você quer olhar agora?\
\nN (Norte) S (Sul) L (leste) O (Oeste)\n\ ");
            return chapter1();
        }
        else
        {
            printf("\nAção Incompreensível\n");
        }

        }while(aux != 's' && aux != 'n');
    }
}

void openarq()
{
    FILE *newarq;
    char escreve[TAM];

    newarq = fopen("Pedaço de papel.txt", "w+");

    if (newarq == NULL)
    {

    }
    else
    {

        fputs("quem cometer iNjustiÇa receberá de voltA\n\
iNjustIça, e não haVerá exceção pAra ninGuém.\n\
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
        printf("\nAo olhar para o norte você vê a cama na qual acordou");
        printf("\nVocê pode investigá-la ou ainda continuar vasculhando o quarto.\
\nO que você quer fazer?\n\
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
            printf("Ao investigar a cama, você encontra um papel amassado.\
\nHá algo escrito nele. Você guarda o papel com você, você deverá lê-lo!\n");
            openarq();
            printf("\nPara onde você quer olhar agora?\
\nN (Norte) S (Sul) L (leste) O (Oeste)\n\ ");
        }
        else if(aux == 'v')
        {
            printf("\nContinuar vasculhando");
            printf("\nPara onde você quer olhar agora?\
\nN (Norte) S (Sul) L (leste) O (Oeste)\n\ ");
            return chapter1();
        }
        else
        {
            printf("\nAção Incompreensível\n");
        }

        }while(aux != 'i' && aux != 'v');
    }

    else if(aux == 's')
    {
        printf("\nAo olhar para o sul você vê um alçapão.\n\
Você pode investigá-lo ou ainda continuar vasculhando o quarto.\
\nO que você quer fazer?\
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
            printf("\nO alçapão está bloqueado por uma trava. Nesta trava há uma sequência de botões giratórios com letras.");
            printf("\nVocê pode escrever uma senha ou ainda continuar vasculhando o quarto. O que você quer fazer?\
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
            printf("\nPara onde você quer olhar agora?\
\nN (Norte) S (Sul) L (leste) O (Oeste)\n\ ");
            return chapter1();
            }
            else
            {
                printf("\nAção Incompreensível\n");
            }
            }while(aux != 'e' && aux != 'v');
        }
        else if(aux == 'v')
        {
            printf("\nContinuar vasculhando");
            printf("\nPara onde você quer olhar agora?\
\nN (Norte) S (Sul) L (leste) O (Oeste)\n\ ");
            return chapter1();
        }
        else
        {
            printf("\nAção Incompreensível\n");
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

        printf("\nVocê vê uma pequena janela redonda, mas a visão esta bloqueada por tabuas de madeira do lado de fora.\n");
        printf("\nPara onde você quer olhar agora?\
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

        printf("\nVocê vê algumas caixas vazias.\n");
        printf("\nPara onde você quer olhar agora?\
\nN (Norte) S (Sul) L (leste) O (Oeste)\n\ ");
        return chapter1();
    }
    else
    {
        printf("\nAção Incompreensível\n");
        printf("\nPara onde você quer olhar agora?\
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

        printf("\nNão há mais nada aqui");
        printf("\nPara onde você quer olhar agora?\
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

        printf("\nAo olhar para o sul você vê um alçapão.\n\
Você pode investigá-lo ou ainda continuar vasculhando o quarto.\
\nO que você quer fazer?\
\nI (Investigar) ou V (vasculhar)\n");


        do{
        control(&auxi);

        if(auxi == 'i')
        {
            printf("\nO alçapão está bloqueado por uma trava. Nesta trava há uma sequência de botões giratórios com letras.");
            printf("\nVocê pode escrever uma senha ou ainda continuar vasculhando o quarto. O que você quer fazer?\
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
            printf("\nPara onde você quer olhar agora?\
\nN (Norte) S (Sul) L (leste) O (Oeste)\n\ ");
            return chapter1();
            }
            else
            {
                printf("\nAção Incompreensível\n");
            }
            }while(auxi != 'e' && auxi != 'v');
        }
        else if(auxi == 'v')
        {
            printf("\nContinuar vasculhando");
            printf("\nPara onde você quer olhar agora?\
\nN (Norte) S (Sul) L (leste) O (Oeste)\n\ ");
            return chapter1();
        }
        else
        {
            printf("\nAção Incompreensível\n");
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

        printf("\nVocê vê uma pequena janela redonda, mas a visão esta bloqueada por tabuas de madeira do lado de fora.\n");
        printf("\nPara onde você quer olhar agora?\
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

        printf("\nVocê vê algumas caixas vazias.\n");
        printf("\nPara onde você quer olhar agora?\
\nN (Norte) S (Sul) L (leste) O (Oeste)\n\ ");
        return chapter1();
    }
    else
    {
        printf("\nAção Incompreensível\n");
        printf("\nPara onde você quer olhar agora?\
\nN (Norte) S (Sul) L (leste) O (Oeste)\n\ ");
        return chapter1();
    }

    //pausar a tela
    printf("\n");
    system("PAUSE");
    //limpar tela
    system("cls");
}
