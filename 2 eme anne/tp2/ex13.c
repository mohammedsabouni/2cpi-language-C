#include <stdio.h>
#include <math.h>

int main (){
    float a , b , c ,delta ,x1 , x2;
    printf ("enter les valeurs de a , b et c \n");
    scanf("%f %f %f",&a ,&b, &c);
    if (a == 0 && b == 0 && c == 0)
    {
        printf("la solution est R");
    }
    else if (a == 0 && b == 0 && c != 0)
    {
        printf("impossible");
    }
    else if (a == 0 && b != 0)
    {
        printf("%f",-c/b);
    }
    else if (a != 0)
    {
         delta = (pow(b,2)-(4*a*c));
        if (delta > 0)
        {
            x1 = -b + sqrt((pow(b,2)- 4 * a * c));
            x2 = -b - sqrt((pow(b,2)- 4 * a * c));
            printf("x1 = %f , x2 = %f", x1 , x2);
        }

        if (delta == 0)
        {
            x1 = -b + sqrt((pow(b,2)- 4 * a * c));
            printf("x1 %f", x1 );
        }

        if (delta < 0)
        {
           printf("il n existe aucune solution reele");
        }
        
        
    }
}