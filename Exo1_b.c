#include <stdio.h>
#include <stdlib.h>
// SANS COEFFICIENT

  int main()
{
   int i, nbr;
   float tab[30], somme, moyenne;

   printf(" Entrez le nombre d'elements dans le tableau: ");
   scanf("%d", &nbr);

  somme = 0;
   for (i = 0; i < nbr; i++)
   {
      printf(" Entrez les elements du tableau:\n");
      scanf("%f", &tab[i]);
      somme = somme + tab[i];
   }

   printf(" La somme = %2.f\n", somme);

   moyenne = somme / nbr;

   printf(" La moyenne = %2.f", moyenne);

}
