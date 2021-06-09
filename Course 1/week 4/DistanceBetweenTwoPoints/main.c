#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char** argv)
{
	float pointx1;
	float pointy1;
	float pointx2;
	float pointy2;

	printf("Enter the first point x co-ordinate: ");
	scanf_s("%f", &pointx1);
	printf("\n");
	printf("Enter the first point y co-ordinate: ");
	scanf_s("%f", &pointy1);
	printf("\n");
	printf("Enter the second point x co-ordinate: ");
	scanf_s("%f", &pointx2);
	printf("\n");
	printf("Enter the second point y co-ordinate: ");
	scanf_s("%f", &pointy2);
	printf("\n");
	float distance = sqrtf(powf(pointx2 - pointx1, 2) + powf(pointy2 - pointy1, 2));
	printf("The Distance is: %.2f\n", distance);
	
}