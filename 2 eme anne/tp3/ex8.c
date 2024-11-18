#include <stdio.h>

int main (){
    int n , sp=0 , si=1;
    scanf ("%d", &n);

   
    for (int i = 0; i < n; i++)
    {
        sp= sp+2 ;
    }

    for (int i = 0; i < n; i++)
    {
        si = si + 2;
    }

    printf ("%d \n", sp );
    printf ("%d", si );
    
}