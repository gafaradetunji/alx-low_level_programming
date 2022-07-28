#include <stdio.h>

/*
 * Main - Prints out all the sizes of each variable 
 
 * Return: Always 0 (success)
 */

int main(void) {
	int character = sizeof(char);
	int num = sizeof(int);
	int longint = sizeof(long int);
	int large = sizeof(long long int);
	int f = sizeof(float);

	printf("Size of a char: %lu byte(s)\n",character);
	printf("Size of a int: %lu byte(s)\n",num);
	printf("Size of a long int: %lu byte(s)\n",longint);
	printf("Size of a long long int: %lu byte(s)\n",large);
	printf("Size of a float: %lu byte(s)\n",f);

	return (0);
}
