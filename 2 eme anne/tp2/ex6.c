#include <stdio.h>
int main(){
    char a , b , c ;
    printf("entrez 3 caracteres \n");
    scanf("%c %c %c", &a ,&b, &c);
    if ((a > b && b > c) || (a < b && b < c))
    {
        printf("ils sont ranges");
    }
    else 
    {
        printf("ils ne sont pas ranges");
    }
    return 0;
}