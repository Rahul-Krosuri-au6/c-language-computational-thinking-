#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main(int argc, char** argv)
{
	int num;
	char select;
	printf("Enter a Number: ");
	scanf("%d", &num);
	if (num >= 0)
	{
		printf("It is a positive number\n");
	}
	else if (num < 0)
	{
		printf("It is a negative number\n");
	}
	else
	{
		printf("Please Enter a number\n");
	}
	getchar();
	printf("\n");
	printf("************\n");
	printf("N	New Game\n");
	printf("L	Load Game\n");
	printf("O	Options\n");
	printf("Q	Quit\n");
	printf("************\n");
	printf("\n");
	printf("Select an option: ");
	scanf("%c", &select);
	select = tolower(select);
	if (select == 'n')
	{
		printf("New Game\n");
	}
	else if (select == 'l')
	{
		printf("Load Game\n");
	}
	else if (select == 'o')
	{
		printf("Options\n");
	}
	else if (select == 'q')
	{
		printf("Quit\n");
	}
	else
	{
		printf("Enter a valid option\n");
	}

	return (EXIT_SUCCESS);
}