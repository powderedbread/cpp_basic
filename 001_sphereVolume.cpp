#include<stdio.h>
#define PI 3.14159

int main(void)
{
	int radius;
	printf("Enter radius : ");
	scanf_s("%d", &radius);
	printf("volume is : %f \n", (4.0/3.0) *PI* radius * radius * radius);
	return 0;
}
