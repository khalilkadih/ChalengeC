#include <stdio.h>
#include <math.h>

int main()
{
    int Number;
    int a,b,c;
    
    printf("entrer nUmbres: \n");
    scanf("%d",&Number);
    a=(Number%100)%10;
    b=(Number%100)/10;
    c=Number/100;
    
    printf("resultas final est %d %d %d:\n",a,b,c);
    

    
    return 0;
}