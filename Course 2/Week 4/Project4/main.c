#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <stdbool.h>

int main(int argc, char** argv)
{
	int inp = 0;
	int maxInput = INT_MIN;
	bool provided = false;

	while (inp != -1)
	{
		printf("Enter an interger to proceeed (-1 to quit): ");
		scanf("%d", &inp);
		if (inp != 1)
		{
			provided = true;
		}

		if (inp != -1 && inp > maxInput)
		{
			maxInput = inp;
		}
	}
	printf("\n");
	if (provided)
	{
		printf("Max number provided: %d\n", maxInput);
	}
	else
	{
		printf("No inputs other than -1 provided.\n");
	}

	printf("\n");



	return (EXIT_SUCCESS);
}