#include <stdio.h>

int main (){
    int T[10] , S=0;
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &T[i]);
    }
   
   

    for (int j = 0; j < 10; j++)
    {
        S=S+T[j];
    }
     printf("%d",S);
    
    return 0;

}