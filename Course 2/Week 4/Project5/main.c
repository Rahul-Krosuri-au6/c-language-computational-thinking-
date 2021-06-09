#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv)
{
	int height;
	int width;
	
	do
	{
		printf("Enter the width of the box: ");
		scanf("%d", &width);
		printf("Enter the height of the box: ");
		scanf("%d", &height);
		if ((height > 20 || height < 3) && (width > 20 || width < 3))
		{
			printf("\n");
			printf("Please Enter the width and height between 3 and 20\n");
		}
	} while ((height > 20 || height < 3) && (width > 20 || width < 3));

	for (int i = 1; i <= width; i++)
	{
		printf("*");
	}
	printf("\n");
	for (int i = 2; i <= width; i++)
	{
		printf("*");
		for (int j = 2; j <= height; j++)
		{
			printf(" ");
		}
		printf("*");
		printf("\n");
	}
	for (int i = 1; i <= width; i++)
	{
		printf("*");
	}
	printf("\n");

	return (EXIT_SUCCESS);
}