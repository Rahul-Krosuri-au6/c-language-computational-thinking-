#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv)
{
	int scores[5];
	for (int i = 0; i < 5; i++)
	{
		printf("Enter the score of %d: ", i+1);
		scanf("%d", &scores[i]);
		printf("\n");
		while (scores[i] < 0 || scores[i] > 100)
		{
			printf("Please Enter a valid input between 0 and 100\n");
			printf("Enter the score of %d: ", i + 1);
			scanf("%d", &scores[i]);
			printf("\n");
		}
	}
	for (int i = 0; i < 5; i++)
	{
		printf("The Score of %d is %d", i+1, scores[i]);
		printf("\n");
	}
	return (EXIT_SUCCESS);
}