#include <stdio.h>
int main (){
    int a , b , c ;
    printf("entrer trois carac \n");
    scanf("%d %d %d", &a,&b,&c);
    (a > b && a > c) ? printf("%d",a) : (b > a && b > c) ? printf("%d",b) : printf("%d",c);
    return 0;
}