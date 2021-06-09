#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define LOWEST_SCORE 1;
#define HIGHEST_SCORE 100;

float averageScores();
int getValidInteger(char promptString[], char errorString[], int upperbound, int lowerbound);

int main(int argc, char** argv)
{
	char prompt[] = "Enter the number of scores you want to enter: ";
	char prompt1[] = "Enter the Scores: ";
	char error1[] = "Enter numbers between 0 and 100";
	char error[] = "Enter scores between upper and lower bounds: ";
	int upper;
	int lower;
	printf("Enter the upper bound: ");
	scanf("%d", &upper);
	printf("Enter the lower bound: ");
	scanf("%d", &lower);
	int n = getValidInteger(prompt, error, upper, lower);
	if (upper <= 0 || lower <= 0)
	{
		printf("Enter a valid upper and lower bounds (must be greater than zero)\n");
		printf("Enter the upper bound: ");
		scanf("%d", &upper);
		printf("Enter the lower bound: ");
		scanf("%d", &lower);
	}
	else
	{
		printf("N is %d\n", n);
	}
	int* scores = malloc(n * sizeof(int));
	for (int i = 0; i < n; i++)
	{
		scores[i] = getValidInteger(prompt1, error1, 0, 100);
	}
	int length = sizeof(scores) / sizeof(scores[0]);
	int sum = 0;
	for (int i = 0; i < length; i++)
	{
		sum += scores[i];
	}
	float average = averageScores(sum, length);
	printf("The average of Scores is: %.2f\n", average);
	free(scores);
	scores = NULL;
}

float averageScores(int sum, int count)
{
	return ((float)(sum) / count);
}

int getValidInteger(char promptString[], char errorString[], int upperbound, int lowerbound)
{
	int input;
	printf(promptString);
	scanf("%d", &input);
	while (input < lowerbound || input > upperbound)
	{
		printf("\n");
		printf(errorString);
		printf(promptString);
		scanf("%d", &input);
	}
}