#include <stdio.h>
#include <math.h>

int main  (){
    int a ;
    printf ("enter un nombre \n");
    scanf("%d",&a);
    if (a < 0)
    {
        
        printf("%f",sqrt(-a));
    }
    else
    {
        printf("%f",sqrt(a));
    }

}