#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there
*
* main - writes 0-9
 *	@void: empty parameter list for main.
 *
 *	Description: writes 0-9 with comma and space
 *
 *	Return: Always 0 (Success)
*/
int main(void)
{
    int num = 1;

	while (num < 10)
	{
		putchar (num);
		if (num < 9)
		{
			putchar (',');
			putchar (' ');
		}
	num++;
	}
	putchar ('\n');
    return (0);
}