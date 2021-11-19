
#include <stdio.h>

int main()
{
    int number;
    int U1=0;
    int U2=1;
    int Un;
   
    printf("Entrer un nombre :");
    scanf("%d",&number);
    if(number<0)printf("please !!Saisir un nombre positive\n");
    else {if(number==0)Un=0;
    else if(number==1)Un=1;
   
    else{
        for(int i=2;i<=number;i++){
        Un=U1+U2;
         U1=U2;
        U2=Un;
        }
       
       
    }
   
        printf(" la suite de  %d est: %d",number,Un);}
       
    return 0;
}