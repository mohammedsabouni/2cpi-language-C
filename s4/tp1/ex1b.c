#include <stdio.h>
#include <stdlib.h>

int main()
{
  int N, Nmax = 0, Nmin = 0, Max, Min;
  printf("entrer le nmbre de valeurs : ");
  scanf("%d", &N);

  int *T = calloc(N, sizeof(int));
  if (T == NULL)
  {
    printf("espace non allouer \n");
    exit(0);
  }
  else
  {
    for (int i = 0; i < N; i++)
    {
      printf("Entrer la valeur %d : ", i + 1);
      scanf("%d", (T + i));
    }

    Max = *T;
    Min = *T;

    for (int i = 0; i < N; i++)
    {
      if (Max < *(T + i))
      {
        Max = *(T + i);
      }
    }

    printf("le maximum est : %d \n", Max);

    for (int i = 0; i < N; i++)
    {
      if (Max == *(T + i))
      {
        Nmax++;
      }
    }

    printf("le nombre d'occurences du maximum est : %d \n", Nmax);

    for (int i = 0; i < N; i++)
    {
      if (Min > *(T + i))
      {
        Min = *(T + i);
      }
    }

    printf("le minimum est : %d \n", Min);

    for (int i = 0; i < N; i++)
    {
      if (Min == *(T + i))
      {
        Nmin++;
      }
    }

    printf("le nombre d'occurences du minimum est : %d \n", Nmin);

    free(T);
  }
}