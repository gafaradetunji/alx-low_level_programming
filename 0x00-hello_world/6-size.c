#include <stdio.h>

/*
 * Main - Entry point
 * Return: Always 0 (success)
 */

int main(void) {
	char c;
	int i;
	long int l;
	long long int L;
	float r;

	printf("Size of a char: %lu byte(s)\n",sizeof(c));
	printf("Size of a int: %lu byte(s)\n",sizeof(i));
	printf("Size of a long int: %lu byte(s)\n",sizeof(l));
	printf("Size of a long long int: %lu byte(s)\n",sizeof(L));
	printf("Size of a float: %lu byte(s)\n",sizeof(r));

	return (0);
}
