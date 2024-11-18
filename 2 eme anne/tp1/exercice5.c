#include<stdio.h>
int main ()
{
	char a ;
    a=getchar ();
	printf("| le code ASCII de %c est: \n",a);
	printf("|  : Decimal : Hexadecimal \n");
	printf("|------------------------- \n");
	printf("|%c :%9d:%13x",a,a,a);
 return 0 ;
}
