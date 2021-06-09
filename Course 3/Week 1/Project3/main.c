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
	while (n <= 0)
	{
		printf("Please Enter a positive value for n\n");
		printf("Enter the size of array: ");
		scanf("%d", &n);
		printf("\n");
	}
	int* scores = malloc(n * sizeof(int));
	int size = n * sizeof(int) / sizeof(scores[0]);
	for (int i = 0; i < size; i++)
	{
		printf("Enter the score of %d: ", i + 1);
		scanf("%d", &scores[i]);
		printf("\n");
		while (scores[i] < 0 || scores[i] > 100)
		{
			printf("Enter a valid score\n");
			printf("Enter the score of %d: ", i + 1);
			scanf("%d", &scores[i]);
			printf("\n");
		}
	}
	int sum = 0;
	for (int i = 0; i < size; i++)
	{
		sum += scores[i];
	}
	float mean = (float)sum / size;
	int sq_diff = 0;
	for (int i = 0; i < size; i++)
	{
		sq_diff += powf(scores[i] - mean, 2);
	}
	float stddev = sqrtf(sq_diff) / (size - 1);
	printf("The mean and standard deviation is: %.2f, %.2f\n", mean, stddev);
	free(scores);
	scores = NULL;

}