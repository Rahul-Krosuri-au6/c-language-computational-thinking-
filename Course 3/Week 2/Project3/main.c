#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char** argv)
{
	char message[30];
	printf("Enter a string to calculate its length:\n");
	fgets(message, sizeof(message), stdin);
	int length = strnlen(message, sizeof(message));
	int i = 0;
	while (message[i] != ',' && i < length)
	{
		i++;
	}
	if (i < length)
	{
		printf("Comma is found at index %d\n", i);
	}
	else
	{
		printf("No comma found\n");
	}
	printf("'%s' has %zu characters\n", message, strnlen(message, sizeof(message)));

	return (EXIT_SUCCESS);
}