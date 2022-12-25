#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;

    printf("Taille du tableau ");
    scanf("%d", &n);

    int T[n], T_pos[n], T_neg[n];

    for (int i = 0; i < n; i++)
    {
        printf("T[%d]= ", i);
        scanf("%d", &T[i]);

    }

    printf("le tableau initial:\n");
    for (int i = 0; i < n; i++)
    {
        printf("T[%d] = %d , ", i, T[i]);
    }

    int h = 0, k = 0;

    for (int i = 0; i < n; i++)
    {
        if (T[i] > 0)
        {
            T_pos[h] = T[i];
            h++;
        }
        else
        {
            T_neg[k] = T[i];
            k++;
        }
    }

    printf("\nle tableau positif:\n");
    for (int i = 0; i < h; i++)
    {
        printf("T_pos[%d] = %d , ", i, T_pos[i]);
    }

    printf("\nle tableau negatif:\n");
    for (int i = 0; i < k; i++)
    {
        printf("T_neg[%d] = %d , ", i, T_neg[i]);
    }
}
