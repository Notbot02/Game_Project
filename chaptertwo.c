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

    ge = fopen("G�nesis.txt", "w+");

    if(ge == NULL)
    {

    }
    else
    {
        fputs("1 - No princ�pio, Deus criou os c�us e a terra.\
\n2 - A terra estava informe e vazia as trevas cobriam o abismo e o Esp�rito de Deus pairava sobre as �guas.", ge);

        fclose(ge);
    }

    ex = fopen("�xodo.txt", "w+");

    if(ex == NULL)
    {

    }
    else
    {
        fputs("1 - Eis os nomes dos filhos de Israel que vieram para o Egito com Jac�, cada um com sua fam�lia:\
\n2 - Rubem, Sime�o, Levi, Jud�,", ex);

        fclose(ex);
    }

    le = fopen("Lev�tico.txt", "w+");

    if(le == NULL)
    {

    }
    else
    {
        fputs("1 - O Senhor chamou Mois�s e falou-lhe da tenda de reuni�o:\
\n2 - �Fala, disse-lhe ele, aos israelitas. Dize-lhes: Quando um de v�s fizer uma oferta ao Senhor,\
\nser� dentre o gado maior ou menor que oferecereis.", le);

        fclose(le);
    }

    nu = fopen("N�meros.txt", "w+");

    if(nu == NULL)
    {

    }
    else
    {
        fputs("1 - No primeiro dia do segundo m�s, no segundo ano depois da sa�da do\
\nEgito, o Senhor disse a Mois�s no deserto do Sinai, na tenda de reuni�o:\
\n2 - Fazei o recenseamento de toda a assembl�ia dos filhos de Israel\
\nsegundo suas fam�lias, suas casas patriarcais, contando nominalmente\
\npor cabe�a todos os var�es da idade de vinte anos para cima,", nu);

        fclose(nu);
    }

    de = fopen("Deuteron�mio.txt", "w+");

    if(de == NULL)
    {

    }
    else
    {
        fputs("1 - Eis os discursos que pronunciou Mois�s a todo o Israel do outro lado\
\ndo Jord�o, no deserto, na plan�cie que se estende defronte de Suf, entre\
\nFar�, Tofel, Lab�, Haserot e Di-Zaab.\
\n2 - Desde Horeb at� Cades-Barne h� uma dist�ncia de onze jornadas de\
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

    printf("\nVoc� v� os livros\
\n(n) N�meros\
\n(g) G�nesis\
\n(l) Lev�tico\
\n(d) Deuteron�mio\
\n(e) �xodo\
\nQual a sequ�ncia que voc� organiza a prateleira?\
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
        printf("\nVoc� ouve um clique, agora a porta ao norte est� destranca.\n");
    }
    else
    {
        printf("\nN�o parece que essa ordem est� correta. Voc� quer continuar tentando?");
        printf("\nS (sim) N (n�o)\n");

        do
        {
            control(&aux);
           if(aux == 's')
        {
            return Puzzle2();
        }
        else if(aux == 'n')
        {
            printf("\nPara onde voc� quer olhar agora?\
\nN (Norte) S (Sul) L (leste) O (Oeste)");
            return chapter2_5();
        }
        else
        {
            printf("\nA��o Incompreens�vel\n");
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
printf("               |       guiar�o seu caminho   |              \n");
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

        printf("Voc� se depara com uma parede lisa, na parte superior est� escrito\
\n�As palavras de Deus guiar�o seu caminho.�\
\nEmbaixo da escrita h� uma porta trancada.");
        printf("\nPara onde voc� quer olhar agora?\
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

        printf("\nQuando voc� desceu as escadas, o al�ap�o se recolheu para cima novamente e agora est� emperrado.\
\nVoc� v� a porta do al�ap�o fechada.\
\nVoc� pode continuar vasculhando o quarto.");
        printf("\nPara onde voc� quer olhar agora?\
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

        printf("\nH� um amontoado de livros no ch�o.\
\nVoc� pode investig�-los ou continuar vasculhando o quarto.\
\nO que voc� quer fazer?\n\
I (Investigar) V (vasculhar)\n");

        do
        {
            control(&aux);
          if(aux == 'i')
        {

            printf("\nVoc� separa os livros:\
\nN�meros\
\nG�nesis\
\nLev�tico\
\nDeuteron�mio\
\n�xodo\
\nB�blia\
\nA lenda dos quatro animais celestiais\n\
\n(Arquivos ser�o criados na pasta do seu jogo. Consulte-os quando necess�rio.)\n");
            printf("\nPara onde voc� quer olhar agora?\
\nN (Norte) S (Sul) L (leste) O (Oeste)\n");
        }
        else if(aux == 'v')
        {
            printf("\nContinuar vasculhando o quarto.");
            printf("\nPara onde voc� quer olhar agora?\
\nN (Norte) S (Sul) L (leste) O (Oeste)\n");
            return chapter2();
        }
        else
        {
            printf("\nA��o Incompreens�vel\n");
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

       printf("\nH� uma estante vazia.");
       printf("\nPara onde voc� quer olhar agora?\
\nN (Norte) S (Sul) L (leste) O (Oeste)\n");
       return chapter2();
    }
    else
    {
        printf("\nA��o Incompreens�vel\n");
        printf("\nPara onde voc� quer olhar agora?\
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
printf("               |       guiar�o seu caminho   |              \n");
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

        printf("\nVoc� se depara com uma parede lisa, na parte superior est� escrito\
\n�As palavras de Deus guiaram seu caminho.� ");
        printf("\nPara onde voc� quer olhar agora?\
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

        printf("\nQuando voc� desceu as escadas, o al�ap�o se recolheu para cima novamente e agora est� emperrado.\
\nVoc� v� a porta do al�ap�o fechada.\
\nVoc� pode continuar vasculhando o quarto.\n");
        printf("\nPara onde voc� quer olhar agora?\
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

        printf("\nN�o h� mais nada aqui\n");
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

       printf("\nH� uma estante vazia.\n\
\nVoc� pode organizar os livros que est�o no ch�o e guard�-los ou continuar\
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
            printf("\nPara onde voc� quer olhar agora?\
\nN (Norte) S (Sul) L (leste) O (Oeste)\n");
            return chapter2_5();
        }
        else
        {
            printf("\nA��o Incompreens�vel\n");
        }
    }while (aux != 'o' && aux != 'v');

    }

    else
    {
        printf("\nA��o Incompreens�vel\n");
        printf("\nPara onde voc� quer olhar agora?\
\nN (Norte) S (Sul) L (leste) O (Oeste)\n");
        return chapter2_5();
    }

    //Pausar tela
    system("PAUSE");
    //limpar a tela
    system("cls");
}

