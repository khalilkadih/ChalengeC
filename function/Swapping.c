/******************************************************************************



*******************************************************************************/

#include <stdio.h>
#include <stdlib.h>
  int a,b;
void Swapping(){
    a=a+b;
    b=a-b;
    a=a-b;

}

int main()
{

    printf("Veillez entrer un nombre\n");
    scanf("%d",&a);
    printf("Veillez entrer un nombre\n");
    scanf("%d",&b);

    Swapping();

    printf("la val de x est :%d \n",a);
        printf("la val de y est:%d \n",b);



    return 0;
}
