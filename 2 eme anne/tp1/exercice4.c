#include<stdio.h>
int main()
{
	int a=0 , b=0 ,somme , difference ;
	float moyenne ;
	printf("a:");
	scanf("%d",&a);
	printf("b:");
	scanf("%d",&b);
	
	somme = a+b ;
	difference = a-b ;
	moyenne = (float)(a+b)/2;
	
	printf(" somme : %d \n difference : %d \n moyenne : %f \n"
	,somme, difference , moyenne);
	
	 
}

