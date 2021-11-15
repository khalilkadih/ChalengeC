/******************************************************************************

                            

*******************************************************************************/

#include <stdio.h>

int main()
{
int heure1,heure2;
int minute1,minute2;
int Seco1,Seco2;
int check=1;

printf("Entrer le 1ere  Instant sous format HH:MM:SS :");
scanf("%d:%d:%d",&heure1,&minute1,&Seco1);

printf("Entrer le 2 eme  Instant:");
scanf("%d:%d:%d",&heure2,&minute2,&Seco2);

if(heure1>heure2){
    check=2;
}
if(heure1==heure2 &&minute1==minute2){
    check=2;
}
if(heure1==heure2 &&minute1==minute2 && Seco1==Seco2){
    check=0;
}
switch(check)
{
    case 0:
    {printf("Il s'agit du meme instant.\n");
    break;
    case 1:
    printf("Le premier instant vient avant le deuxieme");
    break;
    case 2:
    printf("le deuxieme instant vient avant le premier.\n");
    break;
}

    

}

    return 0;
}
