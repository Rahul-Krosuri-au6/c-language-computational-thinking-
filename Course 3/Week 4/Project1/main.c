#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
void printMessage();
int main(int argc, char** argv)
{
	printMessage();
	return (EXIT_SUCCESS);
}

void printMessage()
{
	printf("This is a welcome message from another function\n");
	printf("Enter your name: ");
	char name[20];
	fgets(name, sizeof(name), stdin);
	printf("Hello %s\n", &name);
}