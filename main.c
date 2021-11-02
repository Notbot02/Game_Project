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
void chapter3();

// Historia



//controle para movimentar
void control()
{
    fflush(stdin);
    printf("\nO que quer fazer?");
    printf("\n-> ");
    scanf("%c", &controle);

    switch(controle)
    {
        case 's':
        printf("ir para o sul\n");
        break;

        case 'n':
        printf("ir para o norte\n");
        break;

        case 'l':
        printf("ir para o leste\n");
        break;

        case 'o':
        printf("ir para o oeste\n");
        break;

        case 'p':
        printf("");
        break;

        case 'i':
        printf("");
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

    newarq = fopen("Pedaço de papel.txt", "a+");

    if (newarq == NULL)
    {

    }
    else
    {

        fputs("D, R, A, T,  \
              \nE, S, C, R, N,", newarq);

        fclose(newarq);
    }

}
// Fim função criação de arquivos

//puzzles

void Puzzle1()
{
    char resposta_correta[TAM] = "banana";
    char resposta[TAM];

    openarq();

    printf("\nletras desembaralhadas em um papel pode levar a destrancar a porta.\
tente montar uma palavra com elas:");
    printf("\n-> ");

    scanf("%s", &resposta);

    if(strcmp (resposta, resposta_correta) == 0)
    {
        printf("\nparabéns... você conseguiu destravar a porta.\n");
    }
    else
    {
        printf("\nsenha incorreta.");
        return Puzzle1();
    }
}

void Puzzle2()
{
    int order;
    int i = 0;
    int au1, au2, au3, au4, au5;

    printf("\nAo ir para a estante, você se depara com alguns livros desarrumados.\
\nOnde se coloca eles, parece que há algum tipo de encaixe de cinco livros");
    printf("\nEm uma mesinha há cinco livros.\
\n1 livro\
\n2 livro\
\n3 livro\
\n4 livro\
\n5 livro");

    printf("\nQual é a ordem dos livros");

    printf("\n->");
    fflush(stdin);
    scanf("%i", &order);
    au1 = order;

    printf("\n->");
    fflush(stdin);
    scanf("%i", &order);
    au2 = order;

    printf("\n->");
    fflush(stdin);
    scanf("%i", &order);
    au3 = order;

    printf("\n->");
    fflush(stdin);
    scanf("%i", &order);
    au4 = order;

    printf("\n->");
    fflush(stdin);
    scanf("%i", &order);
    au5 = order;

    if(au1 == 2 && au2 == 5 && au3 == 3 && au4 == 1 && au5 == 4)
    {
        printf("\nparabens, você acertou a ordem\n");
    }
    else
    {
        printf("\nEstá errado");
        return Puzzle2();
    }

}

//fim dos puzzles

//parte de cima, tudo relacionado a gameplay ou gimmicks

int main()
{
    //linguagem português
    setlocale(LC_ALL, "Portuguese");
    //Titulo do programa
    SetConsoleTitle("Adventure Text");

    /*for(int i=0; i<2; i++)
    {
        Beep(523.2511,500);
        Beep(543.2211,500);
    }*/
    //introduction();
    //chapter1();
    //printf("\nAgora você está em uma sala parecida com uma biblioteca");
    //chapter2();
    printf("\nAgora você está em uma sala mais aberta");
    chapter3();

    return 0;
}

//parte de baixo, tudo relacionado a história

//introdução da história

void introduction()
{
    /*printf("Você acaba de acordar em um lugar estranho, e não tem ideia\
           de onde está.\n\
           ");


    if(controle == 's')
    {
        printf("\nvocÊ foi para o sul\n");
printf("                __________________________________________ \n\
                        |  . _____		    _____	             |   .       \n\
                        |	|_|_|_|		   |_|_|_|	             |            \n\
                        |					                     | \n\
                        |	.		         :		             | \n\
                        |					                     |      :\n\
                        |  :		.		         :	         | \n\
                        |					                     | \n\
                        |  ____					                 | \n\
                        | (____)~~~~~~~~~~~~~~	    .	   	     |  .\n\
                        | |__________________|		     .	     | \n\
                	    |_||________________||___________________| \n\
                       					                           . \n\
                      					                       \n\
                                                  _______	    \n\
                                                 /       \       \n\
                   				                /_________\       \n\
                                                |_________|        \n\
                 						                            \n\
                							                              \n\ ");



        printf("ao ir para o norte, você se depara com o amuleto de ramar");

        openarq();
    }
    if(controle == 'n')
    {
        printf("\nVocê foi para o norte\n");
    }

    printf("voltando para a stacka zero");
    printf("Objetivo: escape do lugar");*/
}

void chapter1()
{
    printf("\nVocê está perto da cama");
    //printf("\nPara que direção quer ir?");
    control();

    if(controle == 'n')
    {
        printf("\nVocê se depara com uma porta no chão. Tem um tipo de tranca nela\n\
que necessita de uma combinação de palavras\n");

        Puzzle1();
    }
    if(controle == 's')
    {
        printf("\nSó tem uma cama aqui");
        return chapter1();
    }

    printf("\nVocê percebe que a porta abriu agora e decide descer");
}

void chapter2()
{
    //printf("\nOnde quer ir?");

    control();

    if(controle == 'n')
    {
        printf("\nTem uma frase na parede");
        return chapter2();
    }
    if(controle == 's')
    {
        printf("\nTem uma estante de livro ali desarrumada");
        Puzzle2();
    }
    if(controle == 'o')
    {
        printf("\nVocê acabou de sair do porão por aquele lado");
        return chapter2();
    }
    if(controle == 'l')
    {
       printf("\nTem um bau e uma porta trancada");
       return chapter2();
    }

    printf("\nvocê terminou o desafio. e escuta um barulho de algo abrindo.\
\nquando você vê, aquela caixinha que estava trancada, agora está aberta");

    control();

    if(controle == 'l')
    {
        printf("\nVocê vê uma chave");
        control();

        if(controle == 'i')
        {
            printf("\nvocê inspeciona a chave");
            return control();
        }
        if(controle == 'p')
        {
            printf("\npegar a chave");
        }
    }
    else
    {
        return control();
    }

    printf("\nvocê abriu a porta");
}

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


