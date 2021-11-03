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

// fun��o para cria��o de arquivos
void openarq()
{
    FILE *newarq;
    char escreve[TAM];

    newarq = fopen("Peda�o de papel.txt", "a+");

    if (newarq == NULL)
    {

    }
    else
    {

        fputs("D, R, A, T,\nE, S, C, R, N,", newarq);

        fclose(newarq);
    }

}
// Fim fun��o cria��o de arquivos

//puzzles

void Puzzle1()
{
    char resposta_correta[TAM] = "banana";
    char resposta[TAM];

    openarq();

    printf("\nletras desembaralhadas em um papel pode levar a destrancar a porta.\ntente montar uma palavra com elas:");
    printf("\n-> ");

    scanf("%s", &resposta);

    if(strcmp (resposta, resposta_correta) == 0)
    {
        printf("\nparab�ns... voc� conseguiu destravar a porta.\n");
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

    printf("\nAo ir para a estante, voc� se depara com alguns livros desarrumados.
            \nOnde se coloca eles, parece que h� algum tipo de encaixe de cinco livros");

    printf("\nEm uma mesinha h� cinco livros.
            \n1 livro
            \n2 livro
            \n3 livro
            \n4 livro
            \n5 livro");

    printf("\nQual � a ordem dos livros");

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
        printf("\nparabens, voc� acertou a ordem\n");
    }
    else
    {
        printf("\nEst� errado");
        return Puzzle2();
    }

}

//fim dos puzzles

//parte de cima, tudo relacionado a gameplay ou gimmicks

int main()
{
    //linguagem portugu�s
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
    //printf("\nAgora voc� est� em uma sala parecida com uma biblioteca");
    //chapter2();
    printf("\nAgora voc� est� em uma sala mais aberta");
    chapter3();

    return 0;
}

//parte de baixo, tudo relacionado a hist�ria

//introdu��o da hist�ria

void introduction()
{
    /*printf("Voc� acaba de acordar em um lugar estranho, e n�o tem ideia\
           de onde est�.\n\
           ");


    if(controle == 's')
    {
        printf("\nvoc� foi para o sul\n");
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



        printf("ao ir para o norte, voc� se depara com o amuleto de ramar");

        openarq();
    }
    if(controle == 'n')
    {
        printf("\nVoc� foi para o norte\n");
    }

    printf("voltando para a stacka zero");
    printf("Objetivo: escape do lugar");*/
}

void chapter1()
{
    printf("\nVoc� est� perto da cama");
    //printf("\nPara que dire��o quer ir?");
    control();

    if(controle == 'n')
    {
        printf("\nVoc� se depara com uma porta no ch�o. Tem um tipo de tranca nela
                \nque necessita de uma combina��o de palavras\n");

        Puzzle1();
    }
    if(controle == 's')
    {
        printf("\nS� tem uma cama aqui");
        return chapter1();
    }

    printf("\nVoc� percebe que a porta abriu agora e decide descer");
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
        printf("\nVoc� acabou de sair do por�o por aquele lado");
        return chapter2();
    }
    if(controle == 'l')
    {
       printf("\nTem um bau e uma porta trancada");
       return chapter2();
    }

    printf("\nvoc� terminou o desafio. e escuta um barulho de algo abrindo.
            \nquando voc� v�, aquela caixinha que estava trancada, agora est� aberta");

    control();

    if(controle == 'l')
    {
        printf("\nVoc� v� uma chave");
        control();

        if(controle == 'i')
        {
            printf("\nvoc� inspeciona a chave");
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

    printf("\nvoc� abriu a porta");
}

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
         printf("Tem uma bussola na parede e onde fica a inicias de cada ponto cardial
                \nno N h� um buraco de encaixe");
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


