#include <stdio.h>
int main (){
    float a ,b ;
    char c ;
    
    printf("enter une operation entre 2 nombres \n");
    scanf("%f %c %f",&a,&c,&b);

    switch (c)
    {
    case '+' :
       printf("%f",a + b);
        break;
    
    case '-' :
       printf("%f",a-b);
       break;

    case '*' :
       printf("%f",a*b);
       break;

    case '/' :
       if (b == 0)
       {
        printf("erreur : le deuxiemme nombre doit etre different de 0");
       }
       else
       printf("%f",a / b);
       break;
    }
    
}
