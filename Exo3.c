#include <stdio.h>
#include <stdlib.h>

int main()
{
    int nbr, i, j;
  int tab1[100], tab2[100];

    printf("Entrez le nombre d'elements dans le tableau: ");
    scanf("%d", &nbr);
    for (i = 0; i < nbr ; i++)
    {
        printf("Entrez les elements du tableau: ");
        scanf("%d", &tab1[i]);
    }
    //Copier les éléments dans le tableau tab2 à partir de la fin du tableau tab1
    for (i = nbr - 1, j = 0; i >= 0; i--, j++)
        tab2[j] = tab1[i];
    //Copie le tableau inversé dans l'original.
    for (i = 0; i < nbr; i++)
        tab1[i] = tab2[i];
    printf("Le tableau inverser est:\t");
    for (i = 0; i < nbr; i++)
        printf("%d\t", tab1[i]);

    return 0;
}
