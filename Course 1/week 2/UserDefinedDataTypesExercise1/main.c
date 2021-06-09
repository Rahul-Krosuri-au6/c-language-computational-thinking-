#include <stdio.h>
#include <stdlib.h>
/*Problem 1*/
struct Position
{
	float latitude;
	float longitude;
};

typedef struct Position position;

int main(int argc, char** argv)
{
	position currentPosition = { 153.55, 158.69 };
	position anotherPosition = { 120.21, 140.64 };
	float latitudeDifference = currentPosition.latitude - anotherPosition.latitude;
	float longitudeDifference = currentPosition.longitude - anotherPosition.longitude;
	printf("The difference in the positions are: \n");
	printf("Latitude: %.2f \n", latitudeDifference);
	printf("Longitude: %.2f \n", longitudeDifference);
}
