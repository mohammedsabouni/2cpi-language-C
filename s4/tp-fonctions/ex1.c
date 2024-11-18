#include <stdio.h>
#include <math.h>

double distance(double xa, double ya, double xb, double yb);

int main()
{
    double xa, ya, xb, yb, AB;
    printf("entrer xa, ya, xb, yb : \n");
    scanf("%lf %lf %lf %lf", &xa, &ya, &xb, &yb);
    AB = distance(xa, ya, xb, yb);
    printf("AB = %lf", AB);
    return 0;
}

double distance(double xa, double ya, double xb, double yb)
{
    double AB;
    AB = sqrt(pow((xb - xa), 2) + pow((yb - ya), 2));
    return AB;
}