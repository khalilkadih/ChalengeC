/******************************************************************************

  

*******************************************************************************/

#include <stdio.h>

int main()
{
int number=1;
int Summ=0,Max=0;
printf("Entrez un ensemble d'entier.\n");

    while(number!=0)
    {
        do{
            scanf("%d",&number);
            if(number>100)printf("Entrez SVP un entier inferieur ou egal a 100\n");
        }while(number>100);

        Summ=Summ+number;
        if(number>Max){Max=number;}


    }

printf("Summ is :\n",Summ);
printf("max is :",Max);

    return 0;
}
