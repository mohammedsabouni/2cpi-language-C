#include <stdio.h>

int calculer(int n);

int main()
{
    int n;
    printf("entrer n : \n");
    scanf("%d", &n);
    printf("%d", calculer(n));
    return 0;
}

int calculer(int n)
{
    if (n > 1)
    {
        int result = n * (n + 1);
        return calculer(n - 1) + result;
    }
    else {
        return 2;
    }
    
}