/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
int  Somme(int a,int b){
    int somme=a+b;
    return somme;
}

int main()
{
    int a,b;
    printf("entrer la val de La premiere variable:");
    scanf("%d",&a);
     printf("entrer la val de La premiere variable:");
    scanf("%d",&b);
    
    
    int resultas =Somme(a,b);
         printf("Requltas est: %d",resultas);


    return 0;
}
