#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

int getValidInput(char prompt[], char error[], int upperbound, int lowerbound);
void printCharacter(char character, int times);
void printInterior(int width, int height);
int main(int argc, char** argv)
{
	int width = getValidInput("Enter the width (3-20): ", "Enter between 3-20", 20, 3);
	int height = getValidInput("Enter the height (3-20): ", "Enter between 3-20", 20, 3);
	printf("\n");
	printCharacter('*', width);
	printf("\n");
	printInterior(width, height);
	printCharacter('*', width);
	printf("\n");
	return (EXIT_SUCCESS);
}

int getValidInput(char prompt[], char error[], int upperbound, int lowerbound)
{
	int input;
	printf(prompt);
	scanf("%d", &input);
	while (input < lowerbound || input > upperbound)
	{
		printf(error);
		printf(prompt);
		scanf("%d", &input);
	}
}

void printCharacter(char character, int times)
{
	for (int i = 0; i < times; i++)
	{
		printf("%c", character);
	}
}

void printInterior(int width, int height)
{
	for (int i = 2; i < height; i++)
	{
		printCharacter('*', 1);
		printCharacter(' ', width - 2);
		printCharacter('*', 1);
		printf("\n");
	}
}