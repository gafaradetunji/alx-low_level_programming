#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there
*
* betty style doc for function main goes there
*/
int main(void)
{
    int num = 1;

	while (num < 10)
	{
		putchar(num);
		if (num < 9)
		{
			putchar(',');
			putchar(' ');
		}
	num++;
	}
	putchar('\n');
    return (0);
}