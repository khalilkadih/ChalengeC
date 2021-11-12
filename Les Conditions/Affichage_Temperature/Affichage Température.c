/******************************************************************************

                        Challenge 5 : Affichage Température
Ecrivez un programme qui demande la température en Fahrenheit et la transforme en degré Celsius et affiche la sensation ressentie (très froid, froid, chaud, très chaud)

La formule : C = (F-32)/1.8

else if
    else if(Resultas>30){printf("Oh la la il chaud ")}

*******************************************************************************/

#include <stdio.h>

int main()
{
    float temperature_F;
    float Resultas;
    printf("Bonjour !!Entrer la température en Fahrenheit: ");
    scanf("%f",& temperature_F);
    Resultas=(temperature_F-32)/1.8;
    printf("La resultas Final est : %f\n",Resultas);
    if(Resultas<=10){printf("Oh la la il fait froid");}
    else if(Resultas<0){printf("Oh la la il tres froid ");}
    else if(Resultas>30){printf("Oh la la il chaud ");}
    else if(Resultas>40){printf("Oh la la il tres chaud");}

    return 0;
    
}