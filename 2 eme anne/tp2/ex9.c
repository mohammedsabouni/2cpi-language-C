#include <stdio.h>
int main(){
    int a ;
    printf(" entrer un nombre \n");
    scanf("%d",&a);
    if (a <= 7 && a >= -2)
    {
       printf("%d appartient a l intervalle") ;

    }
    else
    {
        printf("%d n'appartient pas a l intervalle");
    }
}