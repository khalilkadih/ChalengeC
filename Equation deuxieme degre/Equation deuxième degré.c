        /******************************************************************************

        *******************************************************************************/

        #include <stdio.h>
        #include <math.h>

        int main()
        {
            //4x²+2x+1;
            int a,b,c,x1,x2,D,x0,sqr;


            printf("entrer La valeur de Nombre a et b et c : \n");
            scanf("%d",&a);
            scanf("%d",&b);
            scanf("%d",&c);

            D=(pow(b,2))-4*a*c;
            sqr=sqrt(D);
            printf("le delta est :%d\n\n",D);

        if(D>0)
        {
            x1=((-b-sqr)/(2*a));
            x2=((-b+sqr)/(2*a));
                printf("la solution de votre equation est :%d et %d",x1,x2);


        }else if(D<0)
        {
             printf("n est pas de solution");


        }
        else{
           x0=(-b-(2*a))/2;

                    printf("la solution de votre equation est :%d\n",x0);

        }

            return 0;
    }
