#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main(int argc, char** argv)
{
	char answer;
	printf("Do you like pizza (y or n)?");
	scanf("%c", &answer);
	switch (answer)
	{
	case 'y':
	case 'Y':
		printf("Nice, me too\n");
		break;
	case 'n':
	case 'N':
		printf("Nice, me too\n");
		break;
	default:
		printf("Enter a valid output");
		break;
	}
}