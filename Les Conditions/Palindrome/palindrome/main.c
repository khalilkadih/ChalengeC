#include <stdio.h>
#include <stdlib.h>
#include<string.h>



int main()
{
    int i;
    char chaine[100];
      //int b=0;
      int lengthOfchaine=strlen(chaine);
    printf ("donner la chaine:\n");
    scanf("%s",chaine);
        for(i=0;i<lengthOfchaine/2;i++)
            {
                if(chaine[i]!=chaine[lengthOfchaine-1-i]){
               //b=1;
                //i=lengthOfchaine;
                printf("n'est pas palindrome");
                return 0;
               }
        }


        printf("palindrome");

    //if(b!=0){printf("palindrome");}
    //else printf("n'est palindrome");
        return 0;
    }
