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

// função para criação de arquivos
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
// Fim função criação de arquivos

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

        printf("\nVocê conseguiu destrancar a passagem.\n");
    }
    else
    {
        printf("\nA tranca ainda está trancada.");
        printf("\nVocê quer tentar denovo?\n\
N(Não) S(Sim)\n");

        control();

        if(controle == 's')
        {
            return Puzzle1();
        }
        if(controle == 'n')
        {
            printf("\nPara onde você quer olhar agora?\
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
        printf("\nparabens, você acertou a ordem\n");
    }
    else
    {
        printf("\nNão parece que essa ordem está correta. Você quer continuar tentando?");
        printf("\nS (sim) N (não)\n");

        control();

        if(controle == 's')
        {
            return Puzzle2();
        }
        if(controle == 'n')
        {
            printf("\nPara onde você quer olhar agora?\
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
    //linguagem português
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
    printf("\nVocê está em um quarto escuro, ao Norte, sentado em uma cama, para onde você quer olhar agora?\n\
N (Norte) S (Sul) L (leste) O (Oeste)\n\ ");
    chapter1();
    //divisor 1*/

    //divisor 2
    printf("Você destranca a passagem e desce as escadas ao sul.\
\nVocê se depara com diversas estantes de livros e um amontoado de livros caídos no chão.\
\nO ar está empoeirado o que torna difícil respirar.");
    printf("\nPara onde você quer olhar agora?\
\nN (Norte) S (Sul) L (leste) O (Oeste)\n");
    chapter2();
    chapter2_5();
    //divisor 2

    //divisor 3
    /*printf("\nAgora você está em uma sala mais aberta");
    chapter3();*/
    //divisor 3

    return 0;
}

//parte de baixo, tudo relacionado a história

//introdução da história

void introduction()
{
   printf("Você abre os olhos. Sua cabeça dói como se tivesse recebido uma pancada.\n\
Seus olhos demoram a se adaptar ao ambiente escuro,\
\nmas logo você percebe que não faz ideia de onde está.\n\ ");
}

// capitulo 1
void chapter1()
{
    control();

    if(controle == 'n')
    {
        printf("\nAo olhar para o norte você vê a cama na qual acordou");
        printf("\nVocê pode investigá-la ou ainda continuar vasculhando o quarto.\
\nO que você quer fazer?\n\
\nI (Investigar) V (Vasculhar)\n");

        control();

        if(controle == 'i')
        {
            printf("Ao investigar a cama, você encontra um papel amassado.\
\nHá algo escrito nele. Você guarda o papel com você, você deverá lê-lo!\n");
            openarq();
            printf("\nPara onde você quer olhar agora?\
\nN (Norte) S (Sul) L (leste) O (Oeste)\n\ ");
            return chapter1();
        }
        else if(controle == 'v')
        {
            printf("\nContinuar vasculhando");
            printf("\nPara onde você quer olhar agora?\
\nN (Norte) S (Sul) L (leste) O (Oeste)\n\ ");
            return chapter1();
        }
    }

    if(controle == 's')
    {
        printf("\nAo olhar para o sul você vê um alçapão.\n\
Você pode investigá-lo ou ainda continuar vasculhando o quarto.\
\nO que você quer fazer?\
\nI (Investigar) ou V (vasculhar)\n");

        control();

        if(controle == 'i')
        {
            printf("\nO alçapão está bloqueado por uma trava. Nesta trava há uma sequência de botões giratórios com letras.");
            printf("\nVocê pode escrever uma senha ou ainda continuar vasculhando o quarto. O que você quer fazer?\
\nE (escrever senha) ou V (vasculhar)\n");
            control();
            if(controle == 'e')
            {
                Puzzle1();
            }
            if(controle == 'v')
            {
            printf("\nContinuar vasculhando");
            printf("\nPara onde você quer olhar agora?\
\nN (Norte) S (Sul) L (leste) O (Oeste)\n\ ");
            return chapter1();
            }
        }
        if(controle == 'v')
        {
            printf("\nContinuar vasculhando");
            printf("\nPara onde você quer olhar agora?\
\nN (Norte) S (Sul) L (leste) O (Oeste)\n\ ");
            return chapter1();
        }

    }

    if(controle == 'l')
    {
        printf("\nVocê vê uma pequena janela redonda, mas a visão esta bloqueada por tabuas de madeira do lado de fora.\n");
        printf("\nPara onde você quer olhar agora?\
\nN (Norte) S (Sul) L (leste) O (Oeste)\n\ ");
        return chapter1();
    }
    if(controle == 'o')
    {
        printf("\nVocê vê algumas caixas vazias.\n");
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

// capitulo 2
void chapter2()
{
    control();

    if(controle == 'n')
    {
        printf("\nVocê se depara com uma parede lisa, na parte superior está escrito\
\n“As palavras de Deus guiaram seu caminho.” ");
        printf("\nPara onde você quer olhar agora?\
\nN (Norte) S (Sul) L (leste) O (Oeste)\n");
        return chapter2();
    }
    if(controle == 's')
    {
        printf("\nQuando você desceu as escadas, o alçapão se recolheu para cima novamente e agora está emperrado.\
\nVocê vê a porta do alçapão fechada.\
\nVocê pode continuar vasculhando o quarto.");
        printf("\nPara onde você quer olhar agora?\
\nN (Norte) S (Sul) L (leste) O (Oeste)\n");
        return chapter2();
    }
    if(controle == 'o')
    {
        printf("\nHá um amontoado de livros no chão.\
\nVocê pode investigá-los ou continuar vasculhando o quarto.\
\nO que você quer fazer?\n\
I (Investigar) V (vasculhar)\n");

        control();

        if(controle == 'i')
        {

            printf("\nVocê separa os livros:\
\nNúmeros\
\nGênesis\
\nLevítico\
\nDeuteronômio\
\nÊxodo\
\nBíblia\
\nA lenda dos quatro animais celestiais\
\n(Arquivos serão criados na pasta do seu jogo. Consulte-os quando necessário.)");
            printf("\nPara onde você quer olhar agora?\
\nN (Norte) S (Sul) L (leste) O (Oeste)\n");

            livros();
            chapter2_5();
        }
        if(controle == 'v')
        {
            printf("\nContinuar vasculhando o quarto.");
            printf("\nPara onde você quer olhar agora?\
\nN (Norte) S (Sul) L (leste) O (Oeste)\n");
            return chapter2();
        }
    }
    if(controle == 'l')
    {
       printf("\nHá uma estante vazia.");
       printf("\nPara onde você quer olhar agora?\
\nN (Norte) S (Sul) L (leste) O (Oeste)\n");
       return chapter2();
    }
}

void chapter2_5()
{
    control();

    if(controle == 'n')
    {
        printf("\nVocê se depara com uma parede lisa, na parte superior está escrito\
\n“As palavras de Deus guiaram seu caminho.” ");
        printf("\nPara onde você quer olhar agora?\
\nN (Norte) S (Sul) L (leste) O (Oeste)\n");
        return chapter2();
    }
    if(controle == 's')
    {
        printf("\nQuando você desceu as escadas, o alçapão se recolheu para cima novamente e agora está emperrado.\
\nVocê vê a porta do alçapão fechada.\
\nVocê pode continuar vasculhando o quarto.\n");
        printf("\nPara onde você quer olhar agora?\
\nN (Norte) S (Sul) L (leste) O (Oeste)\n");
        return chapter2();
    }
    if(controle == 'o')
    {
        printf("\nNão há mais nada aqui\n");
        return chapter2();
    }
    if(controle == 'l')
    {
       printf("\nHá uma estante vazia.\
\nVocê pode organizar os livros que estão no chão e guardá-los ou continuar\
\nvasculhando o quarto\
\nO (organizar) V (vasculhar)");

        control();

        if(controle == 'o')
        {
            printf("\nVocê vê os livros no chão\
\n(n) Números\
\n(g) Gênesis\
\n(l) Levítico\
\n(d) Deuteronômio\
\n(e) Êxodo\
\nQual a sequência que você organiza a prateleira?\
\n(utilize apenas a primeira letra)\n");
            Puzzle2();
        }
        if(controle == 'v')
        {
            return chapter2_5();
        }
    }

    printf("\nvocê abriu a porta");

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
        printf("Aqui tem 4 bonecos de madeiras e há um espaço de encarte de algo");
    }
    if(controle == 'n')
    {
         printf("Tem uma bussola na parede e onde fica a inicias de cada ponto cardial\
\n no N há um buraco de encaixe");
    }
    if(controle == 'l')
    {
        printf("Há um vaso de flores com um encaixe");
    }
    if(controle == 'o')
    {
        printf("há um quadro com uma paisagem do outono");
    }

    return chapter3();
}

void end()
{

}
