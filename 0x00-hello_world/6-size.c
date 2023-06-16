#include <stdio.h>
/**
 * main - Entry point
 * Description: A C program that write the size of various types using sizeof
 * Return: Always 0 (success)
*/
int main(void)
{
	printf("Size of a char: %u byte(s)", sizeof(char));
	printf("Size of an int: %u byte(s)", sizeof(int));
	printf("Size of a long int: %u byte(s)", sizeof(long int));
	printf("Size of a long long int: %u byte(s)", sizeof(long long int));
	printf("Size of a float: %u byte(s)", sizeof(float));
	return (0);
}
