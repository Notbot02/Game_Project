#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

#include <control.h>
#include <chapterthree.h>

void chapter3()
{
  char aux;

  control(&aux);

  if(aux == 'n')
  {

printf("      ----------_____________________________----------     \n");
printf("               |           _____             |              \n");
printf("               |         .!  @  !.           |              \n");
printf("               |        ( O     L )          |              \n");
printf("               |         !.__S__.!           |               \n");
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

    printf("\nAgora há uma porta fechada e uma bussola na parede.\
\nVocê observa que há um buraco onde deveria estar o N de norte.\
\nVocê pode continuar vasculhando a sala.");

    printf("\nPara onde você quer olhar agora?\
\nN (Norte) S (Sul) L (leste) O (Oeste)");

    return(chapter3);
  }

  else if(aux == 'l')
  {

printf("      ----------_____________________________----------     \n");
printf("               |                             |              \n");
printf("               |                             |              \n");
printf("               |                             |              \n");
printf("               |                             |              \n");
printf("               |       _______ _______       |              \n");
printf("               |      |       |       |      |              \n");
printf("               |      |       |       |      |              \n");
printf("               |      | -;    |    ;- |      |              \n");
printf("               | ###  |       |       |      |              \n");
printf("               | | |  |       |       |      |              \n");
printf("               |( @ )_|_______|_______|______|              \n");
printf("              /                               \\            \n");
printf("             /                                 \\           \n");
printf("            /                                   \\          \n");
printf("           /                                     \\         \n");
printf("          /                                       \\        \n");
printf("         /                                         \\       \n");
printf("        /                                           \\      \n");
printf("       /                                             \\     \n");

    printf("\nHá uma porta trancada e um vaso de flores no canto da sala.\
\nVocê observa que há um buraco no vaso.\
\nVocê pode continuar vasculhando a sala.");

    printf("\nPara onde você quer olhar agora?\
\nN (Norte) S (Sul) L (leste) O (Oeste)");

    return(chapter3);
  }

    else if(aux == 'o')
  {

printf("      ----------_____________________________----------     \n");
printf("               |                             |              \n");
printf("               |                             |              \n");
printf("               |            .\^/.            |              \n");
printf("               |          |\|\|'|/|          |              \n");
printf("               |       .--'-\`|/-''--.       |              \n");
printf("               |        \`-._\./.-'/         |              \n");
printf("               |         >`-._|/.-'<         |              \n");
printf("               |        '~|/~~|~~\|~'        |              \n");
printf("               |              |              |              \n");
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

    printf("\nHá um quadro de uma paisagem no outono, na parede.\
\nNeste quadro é possível ver um buraco na pintura.\
\nVocê pode continuar vasculhando a sala.");

    printf("\nPara onde você quer olhar agora?\
\nN (Norte) S (Sul) L (leste) O (Oeste)");
    return(chapter3);
  }

  else if(aux == 's')
  {

printf("      ----------_____________________________----------     \n");
printf("               |        |_|_____|____|       |              \n");
printf("               |        |____|____|__|       |              \n");
printf("               |        |_|_____|____|       |              \n");
printf("               |       /_____|____|___\\      |             \n");
printf("               |      |___|_____|____|_|     |              \n");
printf("               |      |_|____|____|____|     |              \n");
printf("               |      |___|_____|____|_|     |              \n");
printf("               | ____/__________________\\___ |             \n");
printf("               |  |   _________________   |  |              \n");
printf("               |  |  |                 |  |  |              \n");
printf("               |__|  |_(#)(#)(#)(#)(#)_|  |__|              \n");
printf("              /   |_______________________|   \\            \n");
printf("             /                                 \\           \n");
printf("            /                                   \\          \n");
printf("           /                                     \\         \n");
printf("          /                                       \\        \n");
printf("         /                                         \\       \n");
printf("        /                                           \\      \n");
printf("       /                                             \\     \n");

    printf("\nHá uma grande lareira ao centro.\
\nNesta lareira tem uma prateleira de madeira onde estão quatro bonecos, também de madeira.\
\nVocê pode pegar os bonecos ou continuar vasculhando a sala.\
\nO que você quer fazer?\
\nP (pegar) V (vasculhar)");

        do
        {
            control(&aux);
        if(aux == 'p')
        {
            printf("\nAo pegar os bonecos você observa suas figuras, um dragão, um tigre, um pássaro e uma tartaruga.\
\nVocê guarda os bonecos em seu bolso.");
        }
        else if(aux == 'v')
        {
            printf("\nPara onde você quer olhar agora?\
\nN (Norte) S (Sul) L (leste) O (Oeste)");
            return chapter3();
        }
        else
        {
            printf("\nAção Incompreensível\n");
        }

        }while(aux != 'p' && aux != 'v');

  }

}

