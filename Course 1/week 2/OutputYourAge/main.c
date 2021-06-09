#include <stdio.h>
#include <stdlib.h>

#define DAYS_PER_YEAR 365
#define CURRENT_YEAR 2021
#define OLD_YEAR 1962

int main (int argc, char** argv)
{
	int Age = 24;
	printf("Age is %d \n", Age);
	/*
	* Yesterday's date and in 1962
	*/
	int ageSince = CURRENT_YEAR - OLD_YEAR;
	printf("Age since 1962 in years is: %d and age since 1962 in days is: %d \n", ageSince, ageSince*DAYS_PER_YEAR);
	int compareAge = ageSince - Age;
	printf("The age comparison is: %d", compareAge);
}