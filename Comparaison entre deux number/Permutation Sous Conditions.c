#include <stdio.h>
#include <math.h>

int main()
{
    int Number1,Number2;
    printf("entrer La 1ere Nombre: \n");
    scanf("%d",&Number1);
     printf("entrer La 2eme Nombre: \n");
    scanf("%d",&Number2);
   
    if(Number1>Number2){
        printf("le nombre 1 es supperieur a Number2");
    }else if(Number1<Number2)
    {
        printf("le nombre 1 es inferieur a Number2");
    }
    else{
        printf("les deux numbres est egaux");  
        
    }
    
  
    return 0;
}
