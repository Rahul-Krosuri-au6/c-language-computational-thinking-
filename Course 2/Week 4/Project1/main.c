#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char** argv)
{
	for (int i = 1; i <= 10; i++)
	{
		printf("The square of %d is %.0f\n", i, pow(i, 2));
	}


	return (EXIT_SUCCESS);
}