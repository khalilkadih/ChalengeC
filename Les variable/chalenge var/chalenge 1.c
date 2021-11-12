#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("***************************!\n");
    char nom[50];
    char prenome[150];
    char sex[20];
    int num_telephone;
    int age;

    printf("Enter name: \n");
    scanf("%s",&nom);

    printf("Enter prenome:\n ");
    scanf("%s",&prenome);


    printf("Enter sex:\n ");
    scanf("%s",&sex);


    printf("Enter num_telephone: \n");
    scanf("%d", &num_telephone);

    printf("Enter Age: \n");
    scanf("%d", &age);

    printf("your name is %s \n",nom);
    printf("your prenom is %s\n",prenome);
    printf("your Numero du telephon est :%d\t\n",num_telephone);

    printf("your Age est  :%d\t\n",age);
    printf("*****************Merci**********************");








    return 0;
}
