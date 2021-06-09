#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <stdbool.h>
#define SHIFT_AMOUNT 5

int main(int argc, char** argv)
{
	char message[100];
	printf("Please enter the message to be ciphered: ");
	fgets(message, sizeof(message), stdin);
	bool validMessage = false;
	int originalLength = strnlen(message, sizeof(message)) - 1;
	while (!validMessage)
	{
		validMessage = true;
		for (int i = 0; i < originalLength; i++)
		{
			if (!isupper(message[i]))
			{
				printf("Invalid input please input all capital letters and no small letters\n");
				printf("Please enter the message to be ciphered: ");
				fgets(message, sizeof(message), stdin);
				validMessage = false;
				break;
			}
		}
	}
	char* encryptedMessage = malloc((originalLength + 1) - sizeof(char));
	for (int i = 0; i < originalLength; i++)
	{
		encryptedMessage[i] = message[i] + SHIFT_AMOUNT;
		if (encryptedMessage[i] > 'Z')
		{
			encryptedMessage[i] -= 'Z' - 'A' + 1;
		}
	}
	encryptedMessage[originalLength] = '\0';
	int encryptedMessageLength = originalLength;
	char* decryptedMessage = malloc((encryptedMessageLength + 1) * sizeof(char));
	for (int i = 0; i < encryptedMessageLength; i++)
	{
		decryptedMessage[i] = encryptedMessage[i] - SHIFT_AMOUNT;
		if (decryptedMessage[i] < 'A')
		{
			decryptedMessage[i] += 'Z' - 'A' + 1;
		}
	}
	decryptedMessage[encryptedMessageLength] = '\0';
	printf("\n");
	printf("The Original message is %s\n", message);
	printf("The Encrypted message is %s\n", encryptedMessage);
	printf("The Decrypted message is %s\n", decryptedMessage);

	free(encryptedMessage);
	encryptedMessage = NULL;
	free(decryptedMessage);
	decryptedMessage = NULL;
}