#include <stdio.h>
#include <stdlib.h>

int main()
{
	int N;
	int S = 0;

	do
	{
		printf("entrer la dimention du tableau : ");
		scanf("%d", &N);
	} while ((N < 1) || (N > 50));

	int *T = malloc(N * sizeof(int));

	if (T == NULL)
	{
		printf("Erreur d'allocation mémoire\n");
		exit(1);
	}

	for (int i = 0; i < N; i++)
	{
		printf("la valeur %d :", i + 1);
		scanf("%d", &T[i]);
	}
	for (int i = 0; i < N; i++)
	{
		printf("%d, ", T[i]);
		S += T[i];
	}

	printf("\n la somme est %d :", S);

	free(T);
}
