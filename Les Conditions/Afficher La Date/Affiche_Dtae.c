/******************************************************************************

                            
*******************************************************************************/
#include <stdio.h>

int main()
{
    int jour,Mois,Annes;
    printf("Entrer Une date Comme ce Format  12/10/2021 \n");
    printf("le jour \n");
    scanf("%d",&jour);
       printf("le mois \n");
    scanf("%d",&Mois);
     printf("l'Annes \n");
    scanf("%d",&Annes);
    
    switch (Mois)
{
case 1:
  printf("la date est %d/Javnier/%d  !",jour,Annes);
  break;
case 2:
  printf("la date est %d/Fevrier/%d  !",jour,Annes);
  break;
case 3:
  printf("la date est %d/Mars/%d  !",jour,Annes);
  break;
case 4:
  printf("la date est %d/Avril/%d  !",jour,Annes);
  break;
case 5:
  printf("la date est %d/mai/%d  !",jour,Annes);
  break;
  case 6:
  printf("la date est %d/juin/%d  !",jour,Annes);
  break;
case 7:
  printf("la date est %d/juillet/%d  !",jour,Annes);
  break;
case 8:
  printf("la date est %d/Aout/%d  !",jour,Annes);
  break;
case 9:
  printf("la date est %d/Septembre/%d  !",jour,Annes);
  break;
  case 10 :
  printf("la date est %d/octobre/%d  !",jour,Annes);
  break;
case 11:
  printf("la date est %d/novembre/%d  !",jour,Annes);
  break;
  case 12:
  printf("la date est %d/Decembre/%d  !",jour,Annes);
  break;

default:
  printf("please entre le nombre entre 1 et 12 ");
  break;
}

    return 0;
}
