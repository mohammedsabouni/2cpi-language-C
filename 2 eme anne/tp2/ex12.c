#include <stdio.h>

int main (){
   int n ;
   printf("saisir le nbr d enfants \n");
   scanf("%d",&n);
   if (n <= 3)
   {
    printf("%d",n*150);
   }
   else if (n > 3 && n <= 6)
   {
    printf("%d",450+(38*(n-3)));
   }
   else  
   
    printf("564 est le maximum");
   
   
   return 0; 
}

