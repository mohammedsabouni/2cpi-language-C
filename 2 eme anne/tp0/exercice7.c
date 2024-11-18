#include<stdio.h>
#include<math.h>
int main()
{
	float rayon = 0;
	const float pi=3.14;

	printf("Rayon :");
	scanf("%f",&rayon);
	
	float surface = (4*pi*pow(rayon,2));
	float volume = ((4/3)*pi*pow(rayon,3));
	
	printf("surface : %f , volume : %2f",surface,volume);
	return 0;
}
