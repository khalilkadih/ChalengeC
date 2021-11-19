/******************************************************************************


*******************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>


  int a,b,i;
  
bool isPremiere(int a){
    for(i=2;i<a;i++){
        if(a%i==0)return 0;
    }
    return 1;
}
 
int main()
{
 
    printf("Veillez entrer un nombre\n");
    scanf("%d",&a);
    
    

    if(isPremiere(a)==1){printf("il est Premiere\n");}
    else printf("n'est pas Premiere");


    return 0;
}
