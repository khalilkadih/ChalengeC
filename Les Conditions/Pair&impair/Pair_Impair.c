
#include <stdio.h>
#include <math.h>

int main()
{
    int Number;
    int Check;
    printf("entrer nUmbres: \n");
    scanf("%d",&Number);
   
    Check=Number%2;
       printf("entrer nUmbres: %d\n",Check);

    if(Check==0){
        printf("le nombre est pair");
    }else
    {
        printf("le nombre est impair");
    }
    
  
    return 0;
}
