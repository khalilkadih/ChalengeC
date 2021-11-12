Challenge 7 : Calcule et affichage résultat en format décimal
a et b sont deux entiers saisies au clavier, calculez et affichez a+b, a-b, a*b, a/b, a%b en format décimal, et en soignant l’interface homme/machine.
(a/b donne le quotient de la division, a%b donne le reste de la division)

*******************************************************************************/

#include <stdio.h>

int main()
{
    int  a;
    int  b;
    int Somme,division,modulo,Multiplication,subtraction;
    
    
    printf("Bonjour !!Entrer la valeur de nbre 1: ");
    scanf("%d",& a);
    printf("Bonjour !!Entrer la valeur de nbre 2: ");
    scanf("%d",& b);
    Somme=a+b;
    division=a/b;
    modulo=a%b;
    Multiplication=a*b;
    subtraction=a-b;
    printf("La Somme a+b est : %d\n",Somme);
       
        printf("La division a/b est : %d\n",division);

                printf("La modulo a%b est : %d\n",modulo);

                        printf("La Multiplication a*b est : %d\n",Multiplication);

                                printf("La subtraction a-b est : %d\n",subtraction);

    return 0;
    
}