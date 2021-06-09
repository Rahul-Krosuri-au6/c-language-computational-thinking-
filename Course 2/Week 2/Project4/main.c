#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main(int argc, char** argv)
{
	char menu;
	printf("\n");
	printf("**************\n");
	printf("N	New Game\n");
	printf("L	Load Game\n");
	printf("O	Options\n");
	printf("Q	Quit\n");
	printf("**************\n");
	printf("\n");
	printf("Enter an Option: ");
	scanf("%c", &menu);
	menu = tolower(menu);
	switch (menu)
	{
	case 'n':
		printf("New game\n");
		break;
	case 'l':
		printf("Loading game\n");
		break;
	case 'o':
		printf("Showing options\n");
		break;
	case 'q':
		printf("Quitting Game\n");
		break;
	default:
		printf("Please Select from the above list!!\n");
		break;
	}
}