#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

#include <control.h>
#include <chaptertwo.h>

#define TAM 20

void livros()
{
    FILE *ge;
    FILE *ex;
    FILE *le;
    FILE *nu;
    FILE *de;

    ge = fopen("Gênesis.txt", "w+");

    if(ge == NULL)
    {

    }
    else
    {
        fputs("1 - No princípio, Deus criou os céus e a terra.\
\n2 - A terra estava informe e vazia as trevas cobriam o abismo e o Espírito de Deus pairava sobre as águas.", ge);

        fclose(ge);
    }

    ex = fopen("Êxodo.txt", "w+");

    if(ex == NULL)
    {

    }
    else
    {
        fputs("1 - Eis os nomes dos filhos de Israel que vieram para o Egito com Jacó, cada um com sua família:\
\n2 - Rubem, Simeão, Levi, Judá,", ex);

        fclose(ex);
    }

    le = fopen("Levítico.txt", "w+");

    if(le == NULL)
    {

    }
    else
    {
        fputs("1 - O Senhor chamou Moisés e falou-lhe da tenda de reunião:\
\n2 - “Fala, disse-lhe ele, aos israelitas. Dize-lhes: Quando um de vós fizer uma oferta ao Senhor,\
\nserá dentre o gado maior ou menor que oferecereis.", le);

        fclose(le);
    }

    nu = fopen("Números.txt", "w+");

    if(nu == NULL)
    {

    }
    else
    {
        fputs("1 - No primeiro dia do segundo mês, no segundo ano depois da saída do\
\nEgito, o Senhor disse a Moisés no deserto do Sinai, na tenda de reunião:\
\n2 - Fazei o recenseamento de toda a assembléia dos filhos de Israel\
\nsegundo suas famílias, suas casas patriarcais, contando nominalmente\
\npor cabeça todos os varões da idade de vinte anos para cima,", nu);

        fclose(nu);
    }

    de = fopen("Deuteronômio.txt", "w+");

    if(de == NULL)
    {

    }
    else
    {
        fputs("1 - Eis os discursos que pronunciou Moisés a todo o Israel do outro lado\
\ndo Jordão, no deserto, na planície que se estende defronte de Suf, entre\
\nFarã, Tofel, Labã, Haserot e Di-Zaab.\
\n2 - Desde Horeb até Cades-Barne há uma distância de onze jornadas de\
\nmarcha pelo caminho da montanha de Seir. ", de);

        fclose(de);
    }
}

void Puzzle2()
{
    char aux;
    char order;
    int i = 0;
    char au1, au2, au3, au4, au5;

    printf("\nVocê vê os livros\
\n(n) Números\
\n(g) Gênesis\
\n(l) Levítico\
\n(d) Deuteronômio\
\n(e) Êxodo\
\nQual a sequência que você organiza a prateleira?\
\n(utilize apenas a primeira letra)\n");

    printf("\n->");
    fflush(stdin);
    scanf("%c", &order);
    au1 = order;

    printf("\n->");
    fflush(stdin);
    scanf("%c", &order);
    au2 = order;

    printf("\n->");
    fflush(stdin);
    scanf("%c", &order);
    au3 = order;

    printf("\n->");
    fflush(stdin);
    scanf("%c", &order);
    au4 = order;

    printf("\n->");
    fflush(stdin);
    scanf("%c", &order);
    au5 = order;

    if(au1 == 'g' && au2 == 'e' && au3 == 'l' && au4 == 'n' && au5 == 'd')
    {
        printf("\nVocê ouve um clique, agora a porta ao norte está destranca.\n");
    }
    else
    {
        printf("\nNão parece que essa ordem está correta. Você quer continuar tentando?");
        printf("\nS (sim) N (não)\n");

        do
        {
            control(&aux);
           if(aux == 's')
        {
            return Puzzle2();
        }
        else if(aux == 'n')
        {
            printf("\nPara onde você quer olhar agora?\
\nN (Norte) S (Sul) L (leste) O (Oeste)");
            return chapter2_5();
        }
        else
        {
            printf("\nAção Incompreensível\n");
        }
        }while(aux != 'n' && aux != 's');
    }

}

void chapter2()
{
    char aux;
    control(&aux);

    if(aux == 'n')
    {

printf("      ----------_____________________________----------     \n");
printf("               |                             |              \n");
printf("               |   As paravras de deus       |              \n");
printf("               |       guiarão seu caminho   |              \n");
printf("               |                             |              \n");
printf("               |          ________           |              \n");
printf("               |         |        |          |              \n");
printf("               |         |        |          |              \n");
printf("               |         | -;     |          |              \n");
printf("               |         |        |          |              \n");
printf("               |         |        |          |              \n");
printf("               |_________|________|__________|              \n");
printf("              /                               \\            \n");
printf("             /                                 \\           \n");
printf("            /                                   \\          \n");
printf("           /                                     \\         \n");
printf("          /                                       \\        \n");
printf("         /                                         \\       \n");
printf("        /                                           \\      \n");
printf("       /                                             \\     \n");

        printf("Você se depara com uma parede lisa, na parte superior está escrito\
\n“As palavras de Deus guiarão seu caminho.”\
\nEmbaixo da escrita há uma porta trancada.");
        printf("\nPara onde você quer olhar agora?\
\nN (Norte) S (Sul) L (leste) O (Oeste)\n");
        return chapter2();
    }
    else if(aux == 's')
    {

printf("                         /         \                        \n");
printf("                        /   ;---:   \                       \n");
printf("                       /_____________\                      \n");
printf("      ----------_____________________________----------     \n");
printf("               |                             |              \n");
printf("               |                             |              \n");
printf("               |                             |              \n");
printf("               |                             |              \n");
printf("               |                             |              \n");
printf("               |                             |              \n");
printf("               |                             |              \n");
printf("               |                             |              \n");
printf("               |                             |              \n");
printf("               |                             |              \n");
printf("               |_____________________________|              \n");
printf("              /                               \\            \n");
printf("             /                                 \\           \n");
printf("            /                                   \\          \n");
printf("           /                                     \\         \n");
printf("          /                                       \\        \n");
printf("         /                                         \\       \n");
printf("        /                                           \\      \n");
printf("       /                                             \\     \n");

        printf("\nQuando você desceu as escadas, o alçapão se recolheu para cima novamente e agora está emperrado.\
\nVocê vê a porta do alçapão fechada.\
\nVocê pode continuar vasculhando o quarto.");
        printf("\nPara onde você quer olhar agora?\
\nN (Norte) S (Sul) L (leste) O (Oeste)\n");
        return chapter2();
    }
    else if(aux == 'o')
    {

printf("      ----------_____________________________----------     \n");
printf("               |                             |              \n");
printf("               |                             |              \n");
printf("               |                             |              \n");
printf("               |                             |              \n");
printf("               |                             |              \n");
printf("               |                             |              \n");
printf("               |                             |              \n");
printf("               |                             |              \n");
printf("               |                             |              \n");
printf("               |                             |              \n");
printf("               |_____________________________|              \n");
printf("              /                               \\            \n");
printf("             /           ____                  \\           \n");
printf("            /        ___| ___|_      ____       \\          \n");
printf("           /        |____|_____|    |____|       \\         \n");
printf("          /                                       \\        \n");
printf("         /                    _____                \\       \n");
printf("        /                    |_____|                \\      \n");
printf("       /                                             \\     \n");

        printf("\nHá um amontoado de livros no chão.\
\nVocê pode investigá-los ou continuar vasculhando o quarto.\
\nO que você quer fazer?\n\
I (Investigar) V (vasculhar)\n");

        do
        {
            control(&aux);
          if(aux == 'i')
        {

            printf("\nVocê separa os livros:\
\nNúmeros\
\nGênesis\
\nLevítico\
\nDeuteronômio\
\nÊxodo\
\nBíblia\
\nA lenda dos quatro animais celestiais\n\
\n(Arquivos serão criados na pasta do seu jogo. Consulte-os quando necessário.)\n");
            printf("\nPara onde você quer olhar agora?\
\nN (Norte) S (Sul) L (leste) O (Oeste)\n");
        }
        else if(aux == 'v')
        {
            printf("\nContinuar vasculhando o quarto.");
            printf("\nPara onde você quer olhar agora?\
\nN (Norte) S (Sul) L (leste) O (Oeste)\n");
            return chapter2();
        }
        else
        {
            printf("\nAção Incompreensível\n");
        }

        }while(aux != 'i' && aux != 'v');
    }
    else if(aux == 'l')
    {

printf("      ----------_____________________________----------     \n");
printf("               |                             |              \n");
printf("               |  _________________________  |              \n");
printf("               | |>-----------------------<| |              \n");
printf("               | | |_____________________| | |              \n");
printf("               | |/_______________________\\| |              \n");
printf("               | | |                     | | |              \n");
printf("               | | |_____________________| | |              \n");
printf("               | |/_______________________\\| |              \n");
printf("               | | |_____________________| | |              \n");
printf("               | |/_______________________\\| |             \n");
printf("               |_|>-----------------------<|_|              \n");
printf("              /                               \\            \n");
printf("             /                                 \\           \n");
printf("            /                                   \\          \n");
printf("           /                                     \\         \n");
printf("          /                                       \\        \n");
printf("         /                                         \\       \n");
printf("        /                                           \\      \n");
printf("       /                                             \\     \n");

       printf("\nHá uma estante vazia.");
       printf("\nPara onde você quer olhar agora?\
\nN (Norte) S (Sul) L (leste) O (Oeste)\n");
       return chapter2();
    }
    else
    {
        printf("\nAção Incompreensível\n");
        printf("\nPara onde você quer olhar agora?\
\nN (Norte) S (Sul) L (leste) O (Oeste)\n");
        return chapter2();
    }
    livros();
}

void chapter2_5()
{
    char aux;
    control(&aux);

    if(aux == 'n')
    {

printf("      ----------_____________________________----------     \n");
printf("               |                             |              \n");
printf("               |   As paravras de deus       |              \n");
printf("               |       guiarão seu caminho   |              \n");
printf("               |                             |              \n");
printf("               |          ________           |              \n");
printf("               |         |        |          |              \n");
printf("               |         |        |          |              \n");
printf("               |         | -;     |          |              \n");
printf("               |         |        |          |              \n");
printf("               |         |        |          |              \n");
printf("               |_________|________|__________|              \n");
printf("              /                               \\            \n");
printf("             /                                 \\           \n");
printf("            /                                   \\          \n");
printf("           /                                     \\         \n");
printf("          /                                       \\        \n");
printf("         /                                         \\       \n");
printf("        /                                           \\      \n");
printf("       /                                             \\     \n");

        printf("\nVocê se depara com uma parede lisa, na parte superior está escrito\
\n“As palavras de Deus guiaram seu caminho.” ");
        printf("\nPara onde você quer olhar agora?\
\nN (Norte) S (Sul) L (leste) O (Oeste)\n");
        return chapter2_5();
    }
    else if(aux == 's')
    {

printf("                         /         \                        \n");
printf("                        /   ;---:   \                       \n");
printf("                       /_____________\                      \n");
printf("      ----------_____________________________----------     \n");
printf("               |                             |              \n");
printf("               |                             |              \n");
printf("               |                             |              \n");
printf("               |                             |              \n");
printf("               |                             |              \n");
printf("               |                             |              \n");
printf("               |                             |              \n");
printf("               |                             |              \n");
printf("               |                             |              \n");
printf("               |                             |              \n");
printf("               |_____________________________|              \n");
printf("              /                               \\            \n");
printf("             /                                 \\           \n");
printf("            /                                   \\          \n");
printf("           /                                     \\         \n");
printf("          /                                       \\        \n");
printf("         /                                         \\       \n");
printf("        /                                           \\      \n");
printf("       /                                             \\     \n");

        printf("\nQuando você desceu as escadas, o alçapão se recolheu para cima novamente e agora está emperrado.\
\nVocê vê a porta do alçapão fechada.\
\nVocê pode continuar vasculhando o quarto.\n");
        printf("\nPara onde você quer olhar agora?\
\nN (Norte) S (Sul) L (leste) O (Oeste)\n");
        return chapter2_5();
    }
    else if(aux == 'o')
    {

printf("      ----------_____________________________----------     \n");
printf("               |                             |              \n");
printf("               |                             |              \n");
printf("               |                             |              \n");
printf("               |                             |              \n");
printf("               |                             |              \n");
printf("               |                             |              \n");
printf("               |                             |              \n");
printf("               |                             |              \n");
printf("               |                             |              \n");
printf("               |                             |              \n");
printf("               |_____________________________|              \n");
printf("              /                               \\            \n");
printf("             /                                 \\           \n");
printf("            /                                   \\          \n");
printf("           /                                     \\         \n");
printf("          /                                       \\        \n");
printf("         /                                         \\       \n");
printf("        /                                           \\      \n");
printf("       /                                             \\     \n");

        printf("\nNão há mais nada aqui\n");
        return chapter2_5();
    }
    else if(aux == 'l')
    {

printf("      ----------_____________________________----------     \n");
printf("               |                             |              \n");
printf("               |  _________________________  |              \n");
printf("               | |>-----------------------<| |              \n");
printf("               | | |_____________________| | |              \n");
printf("               | |/_______________________\\| |              \n");
printf("               | | |                     | | |              \n");
printf("               | | |_____________________| | |              \n");
printf("               | |/_______________________\\| |              \n");
printf("               | | |_____________________| | |              \n");
printf("               | |/_______________________\\| |             \n");
printf("               |_|>-----------------------<|_|              \n");
printf("              /                               \\            \n");
printf("             /                                 \\           \n");
printf("            /                                   \\          \n");
printf("           /                                     \\         \n");
printf("          /                                       \\        \n");
printf("         /                                         \\       \n");
printf("        /                                           \\      \n");
printf("       /                                             \\     \n");

       printf("\nHá uma estante vazia.\n\
\nVocê pode organizar os livros que estão no chão e guardá-los ou continuar\
\nvasculhando o quarto\
\nO (organizar) V (vasculhar)");

        do
        {
        control(&aux);

        if(aux == 'o')
        {
            Puzzle2();
        }
        else if(aux == 'v')
        {
            printf("\nPara onde você quer olhar agora?\
\nN (Norte) S (Sul) L (leste) O (Oeste)\n");
            return chapter2_5();
        }
        else
        {
            printf("\nAção Incompreensível\n");
        }
    }while (aux != 'o' && aux != 'v');

    }

    else
    {
        printf("\nAção Incompreensível\n");
        printf("\nPara onde você quer olhar agora?\
\nN (Norte) S (Sul) L (leste) O (Oeste)\n");
        return chapter2_5();
    }

    //Pausar tela
    system("PAUSE");
    //limpar a tela
    system("cls");
}

