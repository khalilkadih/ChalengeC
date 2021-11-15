#include <stdio.h>
#include <math.h>
int main()
{
    float x1,y1,x2,y2,a,b;
    float dist1,dist2,dist;
    printf("Entrez la cordonne x1 et y1\n");
    scanf("%f%f",&x1,&y1);
    printf("Entrez la cordonne x2 et y2\n");
    scanf("%f%f",&x2,&y2);

    dist1 = sqrt( (x1-a)*(x1-a)+(y1-b)*(y1-b) );
    dist2 = sqrt( (x2-a)*(x2-a)+(y2-b)*(y2-b) );
    int SommeDistance=dist1+dist2;
    dist = sqrt( (x1-x2)*(x1-x2)+(y1-y2)*(y1-y2) );
    if( dist == SommeDistance )
    printf("Oui !!!esT sur le segment.\n");
    else
    printf("Non!! n'est pas sur le segment.\n");
    return 0;


    return 0;
}
