        /******************************************************************************
        
        *******************************************************************************/
        
        #include <stdio.h>
        #include <math.h>
        
        int main()
        {
           
           //la mention obtenir par un eleve
           
           float Moyenne;
    
           printf("Entrer La moyenne de l'eleve:\n");
           scanf("%f",&Moyenne);
           
           if(Moyenne<10)
           {
               printf("il est recalé\n");
               
           }
           else if(Moyenne>10 && Moyenne<=12)
		   {
                 printf("la mention passable\n");

		   }
               
           else if(Moyenne>12 && Moyenne<=14)
           {
		   
                 printf("la mention Est Assez Bien \n");
							  

           }
		    else if(Moyenne>14 && Moyenne<=16)
		    {
		   
                 printf("la mention Est  Bien \n");
							  

		    }
                   
		    else if(Moyenne>16 )
		    {
		   
                   printf("la mention Est tres Bien \n");
			
		    }
			   else 
			{
			       			   printf("\n\n verifier la moyenne entrer ");

			}
			   
                   
              
       
            return 0;
    }