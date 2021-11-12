        #include <stdio.h>
        #include <math.h>
        #include <string.h>
        #include <ctype.h>



        int main()
        {

           //la mention obtenir par un eleve

           char Ca;
           printf("Entrer un Caractere :\n");
           scanf("%c",&Ca);

           int x=isdigit(Ca);
           int y=isupper(Ca);
           if(x==0)
           {
               printf("Bien ,Vous aver entrer un caractere \n");

               if(y==1)
               {
                   printf("le caractere est en Majuscule \n");


               }else{
                 printf("le caractere est en Minuscile \n");

               }
           }else{

               printf("please ,Entrer Un caractere");
           }


            return 0;
    }
