#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char** argv)
{
	char message[100];
	printf("Enter a string: ");
	fgets(message, sizeof(message), stdin);
	char* result = NULL;
	result = strchr(message, ',');
	if (result != NULL)
	{
		char* firstLocation = &message[0];
		printf("The Comma is located at index %i\n", result - firstLocation);
	}
	else
	{
		printf("No comma found");
	}
	return (EXIT_SUCCESS);
}