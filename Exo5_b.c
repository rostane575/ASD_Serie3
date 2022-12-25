#include <stdio.h>
#include <stdlib.h>
// Recherche Dichotomique
int main()
{
/* Déclarations */
    int A[50]; /* tableau donné */
    int VAL; /* valeur à rechercher */
    int POS; /* position de la valeur */
    int N; /* dimension */
    int I; /* indice courant */
    int INF, MIL, SUP; /* limites du champ de recherche */
/* Saisie des données */
    printf("Dimension du tableau (max.50) : ");
    scanf("%d", &N );
    for (I=0; I<N; I++)
    {
        printf("Element %d : ", I);
        scanf("%d", &A[I]);
    }
    printf("Element a rechercher : ");
    scanf("%d", &VAL );
/* Affichage du tableau */
    printf("Tableau donne : \n");
    for (I=0; I<N; I++)
       printf("%d ", A[I]);
       printf("\n");
/* Initialisation des limites du domaine de recherche */
    INF=0;
    SUP=N-1;
/* Recherche de la position de la valeur */
    POS=-1;
    while ((INF<=SUP) && (POS==-1))
    {
        MIL=(SUP+INF)/2;
        if (VAL < A[MIL])
            SUP=MIL-1;
        else if (VAL > A[MIL])
            INF=MIL+1;
        else
            POS=MIL;
    }
/* Edition du résultat */
    if (POS==-1)
       printf("La valeur recherchee ne se trouve pas dans le tableau.\n");
    else
       printf("La valeur %d se trouve à la position %d. \n",VAL, POS);
}


