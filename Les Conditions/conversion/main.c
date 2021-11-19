#include <stdio.h>
#include <stdlib.h>

int main()
{
    float temperature_f;
    float resultas;
    printf("Hello world!\n");
    printf("entrer la temperature en Fahrenheit!\n");
    scanf("%2f",&temperature_f);

    resultas=(temperature_f-32)/1.8;
    printf("votre resultas  en degree est: %2f",resultas);

    return 0;
}
