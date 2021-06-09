#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

#define NUM_STUDENTS 3;

struct Students
{
	int number;
	float percentage;
	char grade;
};
typedef struct Students students;
int getValidInteger(char promptString[], char errorString[], int upperBound, int lowerBound);
int getValidFloat(char promptString[], char errorString[], float upperBound, float lowerBound);
char getValidChar(char promptString[], char errorString[], char validValues[], int count);
bool isValid(char character, char validValues[], int count);
void getValidStudentData(students *student, char validValues[], int count);
void writeStudentData(students student, FILE *file);
int main(int argc, char** argv)
{

}
