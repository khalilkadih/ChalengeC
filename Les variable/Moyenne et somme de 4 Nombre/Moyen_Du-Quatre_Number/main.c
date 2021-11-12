/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int a,b,c;
    int Somme;
    int Moyenne;
    printf("Entre La 1ere  Nombre :\n");
    scanf("%d",&a);
     printf("Entre La 2eme  Nombre :\n");
    scanf("%d",&b);
     printf("Entre La 3eme  Nombre :\n");
    scanf("%d",&c);

    Somme=a+b+c;
    printf("les resultas de la Somme est %d :\n",Somme);

    printf("********************\n");

    Moyenne=Somme/3;

    printf("la resultas de la Moyen est %d :\n",Moyenne);

    return 0;
}
