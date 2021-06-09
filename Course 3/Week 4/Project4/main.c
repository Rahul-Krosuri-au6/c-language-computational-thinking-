#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

void swapValues(int* firstvalue, int* secondValue);

int main(int argc, char** argv)
{
	int value1 = 100;
	int value2 = 50;
	printf("\n");
	printf("Before swapping, value1 is %d and value2 is %d\n", value1, value2);
	swapValues(&value1, &value2);
	printf("After swapping value1 is %d and value2 is %d\n", value1, value2);
	return (EXIT_SUCCESS);
}

void swapValues(int* firstvalue, int* secondValue)
{
	int temp;
	temp = *secondValue;
	*secondValue = *firstvalue;
	*firstvalue = temp;
}