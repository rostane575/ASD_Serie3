#include <stdio.h>
#include <stdlib.h>

// AVEC COEFFICIENT
int main()
{
   int i, nbr,coeff[30];
   float tab[30], somme,sommenc, moyenne;
   printf(" Entrez le nombre d'elements dans le tableau: ");
   scanf("%d", &nbr);
  somme = 0;
  sommenc = 0;
   for (i = 0; i < nbr; i++)
   {
      printf(" Entrez les elements du tableau:\n");
      scanf("%f", &tab[i]);
      printf(" Entrez les coefficient des modules:\n");
      scanf("%d", &coeff[i]);
      somme = somme + tab[i]*coeff[i];
      sommenc = sommenc+coeff[i];
   }
   printf(" La somme = %2.f\n", somme);
   moyenne = somme / sommenc;
   printf(" La moyenne = %2.f", moyenne);
}
