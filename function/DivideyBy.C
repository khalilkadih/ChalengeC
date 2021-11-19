/******************************************************************************


Créez une fonction divededby(int n,int a) qui retoune la division des deux valeurs.
Utilisez la fonction dividedby() pour contrôler si le nombre est premier en retourne true,
sinon on retourne false.



*******************************************************************************/

#include <stdio.h>
#include <stdbool.h>

int i;
int divededby(int n,int a){
    return n/a;
}
bool isPremiere(int a){
    for(i=2;i<a;i++){
        if(a%i==0)return 0;
    }
    return 1;
}
int main()
{
    int a,b;
    printf("enter la 1ere Nombre:");
    scanf("%d",&a);
    printf("enter la 1ere Nombre:");
    scanf("%d",&b);
    int res=divededby(a,b);
    printf(" la resultas de  divide est :%d\n\n", res);

    bool resultas=isPremiere(res);
    if(resultas==1)printf("premiere");
    else printf("n'est pas premiere");
    return 0;
}
