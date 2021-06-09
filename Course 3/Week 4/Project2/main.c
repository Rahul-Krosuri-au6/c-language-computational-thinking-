#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int getRandomNumbers();
int main(int argc, char** argv)
{
	srand(time(0));
	for (int i = 1; i <= 5; i++)
	{
		printf("The random Number %d: %d\n", i, getRandomNumbers());
	}
	return (EXIT_SUCCESS);
}

int getRandomNumbers()
{
	return rand();
}