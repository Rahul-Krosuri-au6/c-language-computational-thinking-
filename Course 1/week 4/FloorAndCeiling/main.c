#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char** argv)
{
	float x;
	printf("Enter a floating point number:");
	scanf_s("%f", &x);
	printf("\n");
	printf("floor is: %d\n", (int)x);
	printf("floor using math.h is: %d\n", (int)floorf(x));
	printf("ceil using math.h is: %d\n", (int)ceilf(x));

	return (EXIT_SUCCESS);
}