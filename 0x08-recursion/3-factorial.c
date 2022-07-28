#include "main.h"

/**
 * factorial - factorial n
 * @n: integer arams
 * Return: recursion
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 1)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
Footer
© 2022 GitHub, Inc.