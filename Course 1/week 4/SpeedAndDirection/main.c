#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#ifndef M_PI
#define M_PI 3.1415926535897932846
#endif // !M_PI

struct Vector
{
	float x;
	float y;
};

typedef struct Vector vector;

int main(int argc, char** argv)
{
	float pointx1;
	float pointy1;
	float pointx2;
	float pointy2;

	printf("Enter the first point x co-ordinate: ");
	scanf_s("%f", &pointx1);
	printf("\n");
	printf("Enter the first point y co-ordinate: ");
	scanf_s("%f", &pointy1);
	printf("\n");
	printf("Enter the second point x co-ordinate: ");
	scanf_s("%f", &pointx2);
	printf("\n");
	printf("Enter the second point y co-ordinate: ");
	scanf_s("%f", &pointy2);
	printf("\n");
	float distance = sqrtf(powf(pointx2 - pointx1, 2) + powf(pointy2 - pointy1, 2));
	printf("The Distance is: %.2f\n", distance);
	printf("\n");
	float time;
	printf("Enter the time taken (in seconds):");
	scanf_s("%f", &time);
	printf("\n");
	float speed = distance / time;
	printf("The speed is: %.2f units/sec\n", speed);
	printf("\n");
	float deltaY = (pointy2 - pointy1);
	float deltaX = (pointx2 - pointx1);
	float direction = atan2f(deltaY, deltaX);
	direction *= 180 / M_PI;
	printf("The direction is: %.2f degress\n", direction);
	printf("\n");
	// calculate the velocity vector
	vector velocity = { deltaX / time, deltaY / time };
	printf("Vector velocity is: (%.2f, %.2f)\n", velocity.x, velocity.y);
	printf("\n");
	// calculate velocity in x and y
	vector unidirection = {deltaX, deltaY};
	unidirection.x /= distance;
	unidirection.y /= distance;
	velocity.x = unidirection.x * speed;
	velocity.y = unidirection.y * speed;
	printf("The other way to calculate the velocity vector: (%.2f, %.2f)\n", velocity.x, velocity.y);
	printf("\n");
	return(EXIT_SUCCESS);

}