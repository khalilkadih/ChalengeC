/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <math.h>

int main()
{
    //distance entre deux point
    int x1,x2,y1,y2,r1,r2;
    int MN;
    int sub1,sub2;
    int sumResultas;
    printf("les cordonnes de la note M");
    
    printf("Entre La 1ere  cordonne de M :\n");
    scanf("%d",&x1);
     printf("Entre La 2eme  cordonne :\n");
    scanf("%d",&x2);
    printf("Entre La 1ere  cordonne de N :\n");
    scanf("%d",&y1);
     printf("Entre La 2eme  cordonne N :\n");
    scanf("%d",&y2);
    sub1=x2-x1;
    sub2=y2-y1;
    printf("voila Sub 1 %d\n",sub1);
        printf("voila Sub 2 %d\n",sub2);

    r1=pow(sub1,2);
    r2=pow(sub2,2);
    printf("voila res1 1 %d\n",r1);
        printf("voila res2 2 %d\n",r2);
        
    sumResultas=r1+r2;
     printf("voila res1+res2  %d\n\n",sumResultas);
    
    MN=sqrt(sumResultas);
    printf("les resultas Final est %d :\n",MN);
    
    return 0;
}
