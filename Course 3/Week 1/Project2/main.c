#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv)
{
	int n;
	printf("Enter the size of array: ");
	scanf("%d", &n);
	printf("\n");
	while (n <= 0)
	{
		printf("Please Enter a valid size above 0");
		printf("Enter the size od array: ");
		scanf("%d", &n);
		printf("\n");
	}
	int* scores = malloc(n * sizeof(int));
	printf("The Size of array is: %d\n", n * sizeof(int));
	printf("The size of each element of the array: %d\n", sizeof(scores[0]));
	printf("the number of elements in the array is: %d\n", (n * sizeof(int)) / (sizeof(scores[0])));
	for (int i = 0; i < n; i++)
	{
		printf("Enter the score of %d: ", i+1 );
		scanf("%d", &scores[i]);
		printf("\n");
		while (scores[i] < 0 || scores[i] > 100)
		{
			printf("Please enter a valid score\n");
			printf("Enter the score of %d: ", i + 1);
			scanf("%d", &scores[i]);
			printf("\n");
		}
	}
	for (int i = 0; i < n; i++)
	{
		printf("The score of %d is %d\n", i + 1, scores[i]);
	}
	free(scores);
	scores = NULL;
	return (EXIT_SUCCESS);
}