#include <stdio.h>
#include <stdlib.h>

struct Student
{
	int number;
	float percentage;
	char grade;
};

typedef struct Student student;

int main(int argc, char** argv)
{
	student student0 = {75, 95.5, 'A'};
	printf("Student 0 \n");
	printf("Number: %d \n", student0.number);
	printf("Percentage: %.1f \n", student0.percentage);
	printf("Grade: %c \n", student0.grade);

	return(EXIT_SUCCESS);
}