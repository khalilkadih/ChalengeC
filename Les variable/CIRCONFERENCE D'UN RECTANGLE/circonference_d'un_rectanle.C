
#include <stdio.h>
#include <math.h>

int main()
{
    //circonference d'un cercle
    const p=3.14;
    int r,l;
    int R;
    printf("entrer la longeur : \n");
    scanf("%d",&r);
    printf("entrer la largeur : \n");
    scanf("%d",&l);
    R=2*(l+r);
    printf("les resultas Final est %d :\n",R);
    
    return 0;
}