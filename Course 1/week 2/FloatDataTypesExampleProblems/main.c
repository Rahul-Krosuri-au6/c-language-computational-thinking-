#include <stdio.h>
#include <stdlib.h>

#define MAX_MARKS 10000

int main(int argc, char** argv)
{
	int totalMarks = 9876;
	printf("Total marks are: %d \n", totalMarks);
	float percentage = ((float)totalMarks / MAX_MARKS) * 100;
	printf("Percentage obtained: %.2f \n", percentage);
	printf("Percentage obtained with exact precision: %.0f \n", percentage);
}