#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv)
{
	char message[] = "asdfgh";
	int i = 0;
	while (message[i] != '\0')
	{
		printf("message[%d], Address: %p, Contents: %c\n", i, &message[i], message[i]);
		i++;
	}
	printf("Message: %s\n", message);
	return (EXIT_SUCCESS);
}