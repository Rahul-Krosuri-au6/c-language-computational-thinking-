#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main(int argc, char** argv)
{
	char answer;
	printf("Do you like pizza (y or n)? ");
	scanf("%c", &answer);
	answer = tolower(answer);
	if (answer == 'y')
	{
		printf("Nice\n");
	}
	else if (answer == 'n')
	{
		printf("Oh, thats ok but, Why?\n");
	}
	else
	{
		printf("Please, Enter only y or n!!!\n");
	}

	return (EXIT_SUCCESS);
}