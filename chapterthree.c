#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <stdbool.h>


#include <control.h>
#include <chapterthree.h>

void chapter3()
{
  char aux;

  bool key=false; //condição para liberar opções nos espaços

  int cont=0; //contador dos bonecos;

  control(&aux);

  do
  {  
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

        if (key==true)
        {
                printf("\nVocê observa a bussola com um buraco onde deveria estar o N de norte.
                        \nVocê pode tentar encaixar um boneco ou continuar vasculhando a sala.
                        \nO que você quer fazer?
                        \ne (encaixar) ou v (vasculhar)");
                
                if (aux=='e')
                {
                printf("\nQual boneco você gostaria de encaixar?
                        \nd (dragão) t (tigre) p (pássaro) a (tartaruga)");

                while (aux=='d'||aux=='t'||aux=='p')
                {
                        printf("\nO boneco não parece ter se encaixado bem.");

                        printf("\nO que você quer fazer?
                                \ne (encaixar) ou v (vasculhar)");
                }

                if (aux=='a')
                {
                        printf("\nO boneco se encaixa perfeitamente.");

                        printf("\nPara onde você quer olhar agora?\
                                \nN (Norte) S (Sul) L (leste) O (Oeste)");
                        
                        cont++;

                        return(chapter3); 
                }
                                        
                }
                
                else if (aux=='v')
                {
                printf("\nPara onde você quer olhar agora?\
                        \nN (Norte) S (Sul) L (leste) O (Oeste)");

                return(chapter3);
                }
                else
                {
                printf("\nAção Incompreensível\n");
                return(chapter3);
                }
                
        }

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

        if (key==true)
        {
                printf("\nHá uma porta trancada e um vaso de flores com um buraco, no canto da sala.
                        \nVocê pode tentar encaixar um boneco ou continuar vasculhando a sala.
                        \nO que você quer fazer?
                        \ne (encaixar) ou v (vasculhar)");
                
                if (aux=='e')
                {
                printf("\nQual boneco você gostaria de encaixar?
                        \nd (dragão) t (tigre) p (pássaro) a (tartaruga)");

                while (aux=='a'||aux=='t'||aux=='p')
                {
                        printf("\nO boneco não parece ter se encaixado bem.");

                        printf("\nO que você quer fazer?
                                \ne (encaixar) ou v (vasculhar)");
                }

                if (aux=='d')
                {
                        printf("\nO boneco se encaixa perfeitamente.");

                        printf("\nPara onde você quer olhar agora?\
                                \nN (Norte) S (Sul) L (leste) O (Oeste)");

                        cont++;
                        
                        return(chapter3); 
                }
                                        
                }
                
                else if (aux=='v')
                {
                printf("\nPara onde você quer olhar agora?\
                        \nN (Norte) S (Sul) L (leste) O (Oeste)");

                return(chapter3);
                }
                else
                {
                printf("\nAção Incompreensível\n");
                return(chapter3);
                }
                
        }

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
        
        if (key==true)
        {
                printf("\nHá um quadro de uma paisagem no outono, com um buraco na pintura.
                        \nVocê pode tentar encaixar um boneco ou continuar vasculhando a sala.
                        \nO que você quer fazer?
                        \ne (encaixar) ou v (vasculhar)");
                
                if (aux=='e')
                {
                printf("\nQual boneco você gostaria de encaixar?
                        \nd (dragão) t (tigre) p (pássaro) a (tartaruga)");

                while (aux=='a'||aux=='d'||aux=='p')
                {
                        printf("\nO boneco não parece ter se encaixado bem.");

                        printf("\nO que você quer fazer?
                                \ne (encaixar) ou v (vasculhar)");
                }

                if (aux=='t')
                {
                        printf("\nO boneco se encaixa perfeitamente.");

                        printf("\nPara onde você quer olhar agora?\
                                \nN (Norte) S (Sul) L (leste) O (Oeste)");

                        cont++;

                        return(chapter3); 
                }
                                        
                }
                
                else if (aux=='v')
                {
                printf("\nPara onde você quer olhar agora?\
                        \nN (Norte) S (Sul) L (leste) O (Oeste)");

                return(chapter3);
                }
                else
                {
                printf("\nAção Incompreensível\n");
                return(chapter3);
                }
                
        }

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
        
        if (key==true)
        {
                printf("\nAgora você observa que há um buraco em um dos tijolos da lareira.
                        \nVocê pode tentar encaixar um boneco ou continuar vasculhando a sala.
                        \nO que você quer fazer?
                        \ne (encaixar) ou v (vasculhar)");
                
                if (aux=='e')
                {
                printf("\nQual boneco você gostaria de encaixar?
                        \nd (dragão) t (tigre) p (pássaro) a (tartaruga)");

                while (aux=='a'||aux=='d'||aux=='t')
                {
                        printf("\nO boneco não parece ter se encaixado bem.");

                        printf("\nO que você quer fazer?
                                \ne (encaixar) ou v (vasculhar)");
                }

                if (aux=='p')
                {
                        printf("\nO boneco se encaixa perfeitamente.");

                        printf("\nPara onde você quer olhar agora?\
                                \nN (Norte) S (Sul) L (leste) O (Oeste)");

                        cont++:

                        return(chapter3); 
                }
                                        
                }
                
                else if (aux=='v')
                {
                printf("\nPara onde você quer olhar agora?\
                        \nN (Norte) S (Sul) L (leste) O (Oeste)");

                return(chapter3);
                }
                else
                {
                printf("\nAção Incompreensível\n");
                return(chapter3);
                }
                
        }

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

                key=true; //desbloqueia opções do mapa;
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

  }while(cont!=4);
  
  if (cont==4)
  {
        printf("\nVocê ouve um clique e a porta, a leste da sala, se abre.
                \nAo passar pela porta você percebe que esta do lado de fora da casa.
                \nA porta se fecha atrás de você, nela há um bilhete.
                \nPegar?");
        
        if(aux=='p')
        {
                printf("\nAo pegar o bilhete você lê:
                        \nEu vou cumprir minha promessa, não importa aonde você for ou onde se esconder.
                        \nEu vou te encontrar e te aprisionar assim como fez comigo.\n
                        \nAgora você se vê em uma cabana abandonada, rodeada pelas arvores.
                        \nO que você quer fazer? ")
        }
  }
  

}

