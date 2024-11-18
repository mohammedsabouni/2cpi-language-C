#include <stdio.h>

int main (){
     
     int T[10], n=0 ,p=0 ;
     
     
     for (int i = 0; i < 10; i++)
     {
        scanf("%d",&T[i]);
        if (T[i]>0)
        {
            p = p+1;
        }
        else
            n=n+1;
        
     }
      
      for (int j = 0; j < 10; j++)
      {
        printf("tab(%d)=%d \n", j,T[j]);
      }

      printf("le nombre de valeurs + est %d \n", p)      ;
      printf("le nombre de valeurs - est %d \n", n)      ;


    return 0 ;
}