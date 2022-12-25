#include <stdio.h>
#include <stdlib.h>

int main()
{
    int min, A[30], N;
    printf("Donner la taille du tabeau\n");
    scanf("%d", &N);
    for(int i=0;i < N;i++)
    {
        printf("Entrer le element du tableau\n",i);
        scanf("%d", &A[i]);
    }
    min = A[0];
    for(int i=0;i < N;i++)
    {
        if(A[i]<min)
        {
            min = A[i];
        }
    }
    printf("Le min est %d", min);
}
