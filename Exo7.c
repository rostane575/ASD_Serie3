#include <stdio.h>
#include <stdlib.h>

int main()
{
	int n,m;

	printf("Donnez la taille du tableau T\n");
	scanf("%d",&n);
	printf("Donnez la taille du tableau V\n");
	scanf("%d",&m);
	int T[n],V[m],fusion[n+m],min,max;
	if(n>m) {min = m; max=n;}
	else {min = n; max=m;}

	printf("\n****** T *****\n");
	for( int i=0;i<n;i++)
	{
		printf("T[%d]=",i);
		scanf("%d",&T[i]);
	}
	printf("\n****** V *****\n");
	for( int i=0;i<m;i++)
	{
		printf("V[%d]=",i);
		scanf("%d",&V[i]);
	}

	printf("\n****** Before	 *****\n");
	printf("\n****** T	 *****\n");
	for(int i=0;i<n;i++)
	{
		printf("T[%d]=%d\n",i,T[i]);
	}

	printf("\n****** V	 *****\n");
	for(int i=0;i<m;i++)
	{
		printf("V[%d]=%d\n",i,V[i]);
	}

	 int i=0,j=0,k=0;
	 while (i<min && j<min)

	{
		if(T[i]>V[j])
		{
			fusion[k] = V[j];k++;j++;
		}
		else
		{
			if(T[i]<V[j])
			{
				fusion[k] = T[i];k++;i++;
			}
			else
			{
				if(T[i] == V[j])
				{
					fusion[k] = T[i];k++;i++;
					fusion[k] = V[j];k++;j++;
				}
			}
		}
	}

	for(i=min;i<max;i++)
	{
		if(max == n)
		{
			fusion[k] = T[i];k++;
		}
		else
		{
			fusion[k] = V[i];k++;
		}
	}

	printf("\n*** After ** \n");
	printf("\n****** T	 *****\n");
	for(i=0;i<n;i++)
	{
		printf("T[%d]=%d\n",i,T[i]);
	}
	printf("\n****** V	 *****\n");
	for(i=0;i<m;i++)
	{
		printf("V[%d]=%d\n",i,V[i]);
	}
	printf("\n****** fusion	 *****\n");
	for(i=0;i<k;i++)
	{
		printf("fusion[%d]=%d\n",i,fusion[i]);
	}

	return 0;
}
