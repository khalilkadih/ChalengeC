#include <stdio.h>

int main()
{
    int number;
    int i;
    int NbrInverse=0;
    printf("Entrer un nombre :\n");
    scanf("%d",&number);
     while (number != 0)
   {
      NbrInverse = NbrInverse * 10;
      NbrInverse = NbrInverse + number%10;
      number = number/10;
   }
        printf(" Number is %d:",NbrInverse);
       
    return 0;