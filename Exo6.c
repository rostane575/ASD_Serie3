#include <stdio.h>
#include <stdlib.h>

int main()
{
    int T[20], val;
    int k, i,N=20;
    printf("Entrer la taille du tableau\n");
    scanf("%d", &N);
    for(i=1; i<=N; i++)
    {
         printf("Entrer les elements du tableau\n");
        scanf("%d", &T[i]);
    }
    printf("Donnez la position d'insertion de la valeur a inserer\n");
    scanf("%d", &k);
    while (k>N || k<0)
    {
        printf("Erreur (la position doit etre entre 0 et N).\n\n Recommencez :\t");
        scanf("%d", &k);
    }
    printf("Donnez la valeur a inserer\n");
    scanf("%d", &val);
    for(i=0; i<k; i++)
    {
        T[i]=T[i+1];
    }
    T[k]=val;
    printf("Le tableau apres insertion de la valeur\n\n");
    for(i=0; i<N+1; i++)
    {
        printf("%d\t", T[i]);
    }
}
