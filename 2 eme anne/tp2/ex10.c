#include <stdio.h>

int main (){
    int a ;
    printf("entrer l age \n");
    scanf("%d",&a);
    if (a <= 7 && a >= 6)
    {
        printf("poussin");
    }
    else if (a <= 9 && a >= 8)
    {
        printf("pupille");
    }
    else if (a <= 11 && a >= 10)
    {
        printf("minime");
    }
    else if (a >= 12)
    {
        printf("cadet");
    }
    
    
    
    
}
