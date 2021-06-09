#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define SPEED_OF_LIGHT 3*powf(10, 8)
int main(int argc, char** argv)
{
	float mass;
	printf("Enter the mass of the body:");
	scanf_s("%f", &mass);
	printf("\n");
	float energy = mass * powf(SPEED_OF_LIGHT, 2);
	printf("The energy is: %.2f Joules\n", energy);
}