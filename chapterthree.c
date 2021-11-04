#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

#include <control.h>
#include <chapterthree.h>

void chapter3()
{
  char aux;
  control(&aux)

  if(aux='n')
  {
    printf("\nAssim que passou pela porta ela se fechou atras de você.
            \nAgora há uma porta fechada e uma bussola na parede.
            \nVocê observa que há um buraco onde deveria estar o N de norte.
            \nVocê pode continuar vasculhando a sala.
            \nO que você quer fazer?
            \nv (vasculhar)");
    
    printf("\nPara onde você quer olhar agora?
            \nN (Norte) S (Sul) L (leste) O (Oeste)");

    return(chapter3);
  }
  
  else if(aux='l')
  {
    printf("\nHá uma porta trancada e um vaso de flores no canto da sala.
            \nVocê observa que há um buraco no vaso.
            \nVocê pode continuar vasculhando a sala.
            \nO que você quer fazer?
            \nv (vasculhar)");
    
    printf("\nPara onde você quer olhar agora?
            \nN (Norte) S (Sul) L (leste) O (Oeste)");

    return(chapter3)
  }

    else if(aux='o')
  {
    printf("\nHá um quadro de uma paisagem no outono, na parede.
            \nNeste quadro é possível ver um buraco na pintura.
            \nVocê pode continuar vasculhando a sala.
            \nO que você quer fazer?
            \nv (vasculhar)");
    
    printf("\nPara onde você quer olhar agora?
            \nN (Norte) S (Sul) L (leste) O (Oeste)");

    return(chapter3)
  }

  else if(aux='s')
  {
    printf("\nHá uma grande lareira ao centro.
            \nNesta lareira tem uma prateleira de madeira onde estão quatro bonecos, também de madeira.
            \nVocê pode pegar os bonecos ou continuar vasculhando a sala.
            \nO que você quer fazer?
            \np (pegar) v (vasculhar)");
    
    printf("\nPara onde você quer olhar agora?
            \nN (Norte) S (Sul) L (leste) O (Oeste)");

    return(chapter3)
  }

}