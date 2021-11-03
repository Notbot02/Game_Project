#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <windows.h>

#define TAM 100

char controle;

// Historia

void introduction();
void chapter1();
void chapter2();
void chapter2_5();
void chapter3();
void end();

// Historia



//controle para movimentar
void control()
{
    fflush(stdin);
    printf("-> ");
    scanf("%c", &controle);

    controle = getch();

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
        printf("comando invalido");
        return control();
    }

    return 1;
}
// fim do comando de controle

// fun��o para cria��o de arquivos
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
// Fim fun��o cria��o de arquivos

//puzzles

void Puzzle1()
{
    char resposta_correta[TAM] = "vinganca";
    char resposta[TAM];

    printf("\n-> ");

    scanf("%s", &resposta);

    if(strcmp (resposta, resposta_correta) == 0)
    {
        for(int i=0; i<2; i++)
        {
           Beep(523.2111,516);
           Beep(563.2211,552);
        }

        printf("\nVoc� conseguiu destrancar a passagem.\n");
    }
    else
    {
        printf("\nA tranca ainda est� trancada.");
        printf("\nVoc� quer tentar denovo?\n\
N(N�o) S(Sim)\n");

        control();

        if(controle == 's')
        {
            return Puzzle1();
        }
        if(controle == 'n')
        {
            printf("\nPara onde voc� quer olhar agora?\
\nN (Norte) S (Sul) L (leste) O (Oeste)\n\ ");
            return chapter1();
        }
    }
}

void Puzzle2()
{
    char order;
    int i = 0;
    char au1, au2, au3, au4, au5;

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
        printf("\nparabens, voc� acertou a ordem\n");
    }
    else
    {
        printf("\nN�o parece que essa ordem est� correta. Voc� quer continuar tentando?");
        printf("\nS (sim) N (n�o)\n");

        control();

        if(controle == 's')
        {
            return Puzzle2();
        }
        if(controle == 'n')
        {
            printf("\nPara onde voc� quer olhar agora?\
\nN (Norte) S (Sul) L (leste) O (Oeste)");
            return chapter2_5();
        }
    }

}

void Puzzle3()
{

}
//fim dos puzzles

//parte de cima, tudo relacionado a gameplay ou gimmicks

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

    /*//divisor 0
    introduction();
    //divisor 0

    //divisor 1
    printf("\nVoc� est� em um quarto escuro, ao Norte, sentado em uma cama, para onde voc� quer olhar agora?\n\
N (Norte) S (Sul) L (leste) O (Oeste)\n\ ");
    chapter1();
    //divisor 1*/

    //divisor 2
    printf("Voc� destranca a passagem e desce as escadas ao sul.\
\nVoc� se depara com diversas estantes de livros e um amontoado de livros ca�dos no ch�o.\
\nO ar est� empoeirado o que torna dif�cil respirar.");
    printf("\nPara onde voc� quer olhar agora?\
\nN (Norte) S (Sul) L (leste) O (Oeste)\n");
    chapter2();
    chapter2_5();
    //divisor 2

    //divisor 3
    /*printf("\nAgora voc� est� em uma sala mais aberta");
    chapter3();*/
    //divisor 3

    return 0;
}

//parte de baixo, tudo relacionado a hist�ria

//introdu��o da hist�ria

void introduction()
{
   printf("Voc� abre os olhos. Sua cabe�a d�i como se tivesse recebido uma pancada.\n\
Seus olhos demoram a se adaptar ao ambiente escuro,\
\nmas logo voc� percebe que n�o faz ideia de onde est�.\n\ ");
}

// capitulo 1
void chapter1()
{
    control();

    if(controle == 'n')
    {
        printf("\nAo olhar para o norte voc� v� a cama na qual acordou");
        printf("\nVoc� pode investig�-la ou ainda continuar vasculhando o quarto.\
\nO que voc� quer fazer?\n\
\nI (Investigar) V (Vasculhar)\n");

        control();

        if(controle == 'i')
        {
            printf("Ao investigar a cama, voc� encontra um papel amassado.\
\nH� algo escrito nele. Voc� guarda o papel com voc�, voc� dever� l�-lo!\n");
            openarq();
            printf("\nPara onde voc� quer olhar agora?\
\nN (Norte) S (Sul) L (leste) O (Oeste)\n\ ");
            return chapter1();
        }
        else if(controle == 'v')
        {
            printf("\nContinuar vasculhando");
            printf("\nPara onde voc� quer olhar agora?\
\nN (Norte) S (Sul) L (leste) O (Oeste)\n\ ");
            return chapter1();
        }
    }

    if(controle == 's')
    {
        printf("\nAo olhar para o sul voc� v� um al�ap�o.\n\
Voc� pode investig�-lo ou ainda continuar vasculhando o quarto.\
\nO que voc� quer fazer?\
\nI (Investigar) ou V (vasculhar)\n");

        control();

        if(controle == 'i')
        {
            printf("\nO al�ap�o est� bloqueado por uma trava. Nesta trava h� uma sequ�ncia de bot�es girat�rios com letras.");
            printf("\nVoc� pode escrever uma senha ou ainda continuar vasculhando o quarto. O que voc� quer fazer?\
\nE (escrever senha) ou V (vasculhar)\n");
            control();
            if(controle == 'e')
            {
                Puzzle1();
            }
            if(controle == 'v')
            {
            printf("\nContinuar vasculhando");
            printf("\nPara onde voc� quer olhar agora?\
\nN (Norte) S (Sul) L (leste) O (Oeste)\n\ ");
            return chapter1();
            }
        }
        if(controle == 'v')
        {
            printf("\nContinuar vasculhando");
            printf("\nPara onde voc� quer olhar agora?\
\nN (Norte) S (Sul) L (leste) O (Oeste)\n\ ");
            return chapter1();
        }

    }

    if(controle == 'l')
    {
        printf("\nVoc� v� uma pequena janela redonda, mas a vis�o esta bloqueada por tabuas de madeira do lado de fora.\n");
        printf("\nPara onde voc� quer olhar agora?\
\nN (Norte) S (Sul) L (leste) O (Oeste)\n\ ");
        return chapter1();
    }
    if(controle == 'o')
    {
        printf("\nVoc� v� algumas caixas vazias.\n");
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

// capitulo 2
void chapter2()
{
    control();

    if(controle == 'n')
    {
        printf("\nVoc� se depara com uma parede lisa, na parte superior est� escrito\
\n�As palavras de Deus guiaram seu caminho.� ");
        printf("\nPara onde voc� quer olhar agora?\
\nN (Norte) S (Sul) L (leste) O (Oeste)\n");
        return chapter2();
    }
    if(controle == 's')
    {
        printf("\nQuando voc� desceu as escadas, o al�ap�o se recolheu para cima novamente e agora est� emperrado.\
\nVoc� v� a porta do al�ap�o fechada.\
\nVoc� pode continuar vasculhando o quarto.");
        printf("\nPara onde voc� quer olhar agora?\
\nN (Norte) S (Sul) L (leste) O (Oeste)\n");
        return chapter2();
    }
    if(controle == 'o')
    {
        printf("\nH� um amontoado de livros no ch�o.\
\nVoc� pode investig�-los ou continuar vasculhando o quarto.\
\nO que voc� quer fazer?\n\
I (Investigar) V (vasculhar)\n");

        control();

        if(controle == 'i')
        {

            printf("\nVoc� separa os livros:\
\nN�meros\
\nG�nesis\
\nLev�tico\
\nDeuteron�mio\
\n�xodo\
\nB�blia\
\nA lenda dos quatro animais celestiais\
\n(Arquivos ser�o criados na pasta do seu jogo. Consulte-os quando necess�rio.)");
            printf("\nPara onde voc� quer olhar agora?\
\nN (Norte) S (Sul) L (leste) O (Oeste)\n");

            livros();
            chapter2_5();
        }
        if(controle == 'v')
        {
            printf("\nContinuar vasculhando o quarto.");
            printf("\nPara onde voc� quer olhar agora?\
\nN (Norte) S (Sul) L (leste) O (Oeste)\n");
            return chapter2();
        }
    }
    if(controle == 'l')
    {
       printf("\nH� uma estante vazia.");
       printf("\nPara onde voc� quer olhar agora?\
\nN (Norte) S (Sul) L (leste) O (Oeste)\n");
       return chapter2();
    }
}

void chapter2_5()
{
    control();

    if(controle == 'n')
    {
        printf("\nVoc� se depara com uma parede lisa, na parte superior est� escrito\
\n�As palavras de Deus guiaram seu caminho.� ");
        printf("\nPara onde voc� quer olhar agora?\
\nN (Norte) S (Sul) L (leste) O (Oeste)\n");
        return chapter2();
    }
    if(controle == 's')
    {
        printf("\nQuando voc� desceu as escadas, o al�ap�o se recolheu para cima novamente e agora est� emperrado.\
\nVoc� v� a porta do al�ap�o fechada.\
\nVoc� pode continuar vasculhando o quarto.\n");
        printf("\nPara onde voc� quer olhar agora?\
\nN (Norte) S (Sul) L (leste) O (Oeste)\n");
        return chapter2();
    }
    if(controle == 'o')
    {
        printf("\nN�o h� mais nada aqui\n");
        return chapter2();
    }
    if(controle == 'l')
    {
       printf("\nH� uma estante vazia.\
\nVoc� pode organizar os livros que est�o no ch�o e guard�-los ou continuar\
\nvasculhando o quarto\
\nO (organizar) V (vasculhar)");

        control();

        if(controle == 'o')
        {
            printf("\nVoc� v� os livros no ch�o\
\n(n) N�meros\
\n(g) G�nesis\
\n(l) Lev�tico\
\n(d) Deuteron�mio\
\n(e) �xodo\
\nQual a sequ�ncia que voc� organiza a prateleira?\
\n(utilize apenas a primeira letra)\n");
            Puzzle2();
        }
        if(controle == 'v')
        {
            return chapter2_5();
        }
    }

    printf("\nvoc� abriu a porta");

    //Pausar tela
    system("PAUSE");
    //limpar a tela
    system("cls");
}

// capitulo 3
void chapter3()
{
    printf("\nfuncionou");

    control();

    if(controle == 's')
    {
        printf("Aqui tem 4 bonecos de madeiras e h� um espa�o de encarte de algo");
    }
    if(controle == 'n')
    {
         printf("Tem uma bussola na parede e onde fica a inicias de cada ponto cardial\
\n no N h� um buraco de encaixe");
    }
    if(controle == 'l')
    {
        printf("H� um vaso de flores com um encaixe");
    }
    if(controle == 'o')
    {
        printf("h� um quadro com uma paisagem do outono");
    }

    return chapter3();
}

void end()
{

}
