#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there
*
* betty style doc for function main goes there
*/
int main(void)
{
	int n;
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n > 5)
	{
		printf("%d and is greater than 5\n");
	}
	else if (n == 0)
	{
		printf("%d and is zero\n");
	}
	else
	{
		printf("%d and is less 6 and not zero\n");
	}
	return (0);
}
