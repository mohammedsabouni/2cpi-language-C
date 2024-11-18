#include <stdio.h>

int calculer(int n);

int main(){
    int n;
    printf("entrer n : \n");
    scanf("%d", &n);
    printf("%d", calculer(n));
    return 0;
}

int calculer(int n){
    int i;
    int result = 0;
    for(i = 1; i <= n; i++){
        result = result + (i * (i + 1));
    }
    return result;
}