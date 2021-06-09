#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char** argv)
{
	struct Vector
	{
		float x;
		float y;
	};
	typedef struct Vector vector;
	vector point;
	char poinString[100];
	printf("Enter the x and y points (comma seperated and no spaces): ");
	fgets(poinString, sizeof(poinString), stdin);

	int commaIndex = -1;
	char* result = NULL;
	while (commaIndex == -1)
	{
		result = strchr(poinString, ',');
		if (result != NULL)
		{
			char* startingPoint = &poinString[0];
			commaIndex = result - startingPoint;
		}
		else
		{
			printf("\n");
			printf("Enter a valid input with comma seperated no spaces\n");
			printf("NO COMMA FOUND\n");
			printf("Enter the x and y points (comma seperated and no spaces): ");
			fgets(poinString, sizeof(poinString), stdin);
		}
	}

	char* xString = malloc((commaIndex + 1) * sizeof(char));
	strncpy(xString, poinString, commaIndex);
	xString[commaIndex] = '\0';
	point.x = atof(xString);
	free(xString);
	xString = NULL;
	int length = strnlen(poinString, sizeof(poinString));
	char* yString = malloc((length - commaIndex) * sizeof(char));
	int offSet = commaIndex + 1;
	for (int i = 0; i < length - commaIndex - 1; i++)
	{
		yString[i] = poinString[i + offSet];
	}
	yString[length - commaIndex - 1] = '\0';
	point.y = atof(yString);
	free(yString);
	yString = NULL;
	printf("\n");
	printf("The Value of x is: %.4f\n", point.x);
	printf("The value of y is: %.4f\n", point.y);
	return (EXIT_SUCCESS);
}