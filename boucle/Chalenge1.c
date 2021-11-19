
#include <stdio.h>

int main()
{
    int Number,i;
	printf("Entrer Un Nombre!!:\n");
	scanf("%d",&Number);
	
	for(i=0;i<=10;i++)
	{
		
		printf("\n %d*%d=%d",Number,i,Number*i);
	}
    return 0;
}