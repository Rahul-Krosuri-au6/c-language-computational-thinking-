#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv)
{
	int n;
	int width;
	int height;
	int patternHeight;
	printf("Enter a number: ");
	scanf("%d", &n);
	for (int i = 0; i <= n; i++)
	{
		if (i % 2 == 0)
		{
			printf("%5d", i);
		}
	}
	printf("\n");
	printf("Enter the width: ");
	scanf("%d", &width);
	for (int i = 1; i <= width; i++)
	{
		printf("*");
	}
	printf("\n");
	printf("Enter the height: ");
	scanf("%d", &height);
	printf("Two dimensional * pattern\n");
	for (int i = 1; i <= width; i++)
	{
		for (int j = 1; j <= height; j++)
		{
			printf("*");
		}
		printf("\n");
	}
	printf("Enter the pattern height: ");
	scanf("%d", &patternHeight);
	for (int i = 1; i <= patternHeight; i++)
	{
		for (int j = 1; j <= i; j++)
		{
			printf("*");
		}
		printf("\n");
	}
}