#include <stdio.h>

int main()
{
	int radius;
	printf("please enter your radius\nhere =");

	scanf("%d" , &radius);
	float area = (3.14 * (radius*radius));
	printf("you have entered %i as a radius,\n\nSo this will give us a circle with area equals to %.2f\n\n", radius, area);
	
	return (0);
}
