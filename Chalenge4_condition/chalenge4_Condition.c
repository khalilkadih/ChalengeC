/******************************************************************************

                            Challenge 4 :
Ecrivez un programme C pour calculer la somme de deux valeurs entières données. Si les deux valeurs sont identiques, il renvoie le triple de leur somme.


*******************************************************************************/

#include <stdio.h>
#include <math.h>

int main()
{
    int Number1,Number2,Somme,res;
    printf("entrer La 1ere Nombre: \n");
    scanf("%d",&Number1);
     printf("entrer La 2eme Nombre: \n");
    scanf("%d",&Number2);

   Somme=Number1+Number2;


    if(Number1==Number2)

        {
           res= Somme*=3;
             printf("le resultas est : %d\n",res);

        }else{
            printf("le resultas est : %d",Somme);
}


    return 0;
}
