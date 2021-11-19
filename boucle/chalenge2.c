#include <stdio.h>

int main()
{
    int c,i,j;
	printf("Entrer Nombre du colomn!!:\n");
	scanf("%d",&c);

	for(i=1;i<=c;i++)
	{
	    for(j=c-i;j>=1;j--)
	    printf(" ");
	    for(j=1;j<=i+i-1;j++)
	    
	       printf("*");
	    
		printf("\n");
	}
    return 0;
}
