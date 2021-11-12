#include <stdio.h>
#include <stdlib.h>

int main()
{
    float Metre;
    float mille;

    printf("Hello world!\n");
    printf("Entrer la distance en Metre:\t");
    scanf("%2f",&Metre);

    mille=(Metre*0.001*1.609);

    printf("le resultas Final est %2f \t\n:",mille);


    return 0;
}
