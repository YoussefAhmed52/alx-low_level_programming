#include <stdio.h>
/**
 * main - Entry point
 * Description: A C program using sizeof to print size of various types
 * Return: Always 0 (succes)
*/
int main(void)
{
	printf("Size of a chat: %u byte(s)\n", sizeof(char));
	printf("Size of an int: %u byte(s)\n", sizeof(int));
	printf("Size of a long int: %u byte(s)\n", sizeof(long int));
	printf("Size of a long long int: %u byte(s)\n", sizeof(long long int));
	printf("Size of a float: %u byte(s)\n", sizeof(float));
	return (0);
}
