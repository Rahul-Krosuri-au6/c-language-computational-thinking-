#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char** argv)
{
	printf("     ");
	for (int i = 1; i <= 10; i++)
	{
		printf("%5d", i);
	}
	printf("\n");

	for (int i = 1; i <= 10; i++)
	{
		printf("%5d", i);
		for (int j = 1; j <= 10; j++)
		{
			printf("%5d", i * j);
		}
		printf("\n");
	}
	

	return (EXIT_SUCCESS);
}