#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv)
{
	int hoursDriven = 5;
	int KilometersDriven = 262;
	float KMPH = (float)KilometersDriven / hoursDriven;
	printf("KMPH is: %.1f \n", KMPH);
}