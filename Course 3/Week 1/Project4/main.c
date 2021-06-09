#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char** argv)
{
	int n;
	printf("Enter the size of array: ");
	scanf("%d", &n);
	printf("\n");
	while (n < 0)
	{
		printf("Please enter a valid size\n");
		printf("Enter the size of array: ");
		scanf("%d", &n);
		printf("\n");
	}
	int* scores = malloc(n * sizeof(int));
	int size = (n * sizeof(int)) / sizeof(scores[0]);
	for (int i = 0; i < size; i++)
	{
		printf("Enter the score of %d: ", i+1);
		scanf("%d", &scores[i]);
		printf("\n");
		while (scores[i] < 0 || scores[i] > 100)
		{
			printf("Please Enter a score between 0 and 100\n");
			printf("Enter the score of %d: ", i + 1);
			scanf("%d", &scores[i]);
			printf("\n");
		}
	}
	int max = 0;
	int min = INT_MAX;
	for (int i = 0; i < size; i++)
	{
		if (scores[i] > max)
		{
			max = scores[i];
		}
		if (scores[i] < min)
		{
			min = scores[i];
		}
	}
	printf("The min and max of the scores are: %d and %d\n", min, max);
	free(scores);
	scores = NULL;
	return (EXIT_SUCCESS);
}