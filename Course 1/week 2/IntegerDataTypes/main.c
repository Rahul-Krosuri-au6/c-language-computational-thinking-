#include <stdio.h>
#include <stdlib.h>
/// <summary>
/// Demonstration of integer variable
/// </summary>
/// <param name="argc"></param>
/// <param name="argv"></param>
/// <returns></returns>
#define MINUTES_PER_HOUR 60
int main(int argc, char** argv)
{
	int totalMinutes = 113;
	int totalHours = totalMinutes / MINUTES_PER_HOUR;
	int minutes = totalMinutes % MINUTES_PER_HOUR;
	printf("Hours: %d \n", totalHours);
	printf("Minutes: %d", minutes);
	return(EXIT_SUCCESS);
}
