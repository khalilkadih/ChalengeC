/******************************************************************************



Challenge 4 : Conversion du Mile au Km
Ecrivez un programme qui demande la distance en Mile et la transforme en Metre

La formule : Km = Mile/1.609

(tenir en compte la conversion métrique)

*******************************************************************************/

#include <stdio.h>

int main()
{
    float Mille;
    float Resultas;
    printf("Bonjour !!Entrer la distance en mille: ");
    scanf("%2f",& Mille);
    Resultas=0.01*(Mille/1.609);
    printf("La resultas Final est : %2f",Resultas);

    return 0;
}
