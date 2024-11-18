#include <stdio.h>

int main(){
    int i , j ;

    printf("| X*Y  |");
    for ( j = 0; j < 11; j++)
    {
        printf (" %3d  ",j);
        
    }
    printf("\n");
    
    for ( i = 0; i < 11; i++)
    {
        printf (" %4d  |",i);
        for ( j = 0; j < 11; j++)
    {
        printf (" %3d  ",i*j);
        
        
    }
       printf("\n");
    } 

    
   
    
}