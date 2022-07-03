#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there
*
* main - prints base 16
 *	@void: empty parameter list for main.
 *
 *	Description: prints all hexadecimals
 *
 *	Return: Always 0 (Success)
*/
int main(void)
{
    int num = 1;
    while(num <= 9)
    {
        putchar(num);
        num++;
    }
    num = 10;
    while(num <= 16)
    {
        putchar(num);
        num++;
    }
    putchar('\n');
    return (0);
}