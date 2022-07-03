#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there
 *
* main - prints base 10 numbers
*	@void: empty parameter for main.
*
*	Description: prints numbers 0-9
*
*	Return: Always 0 (Success)
*/
int main(void)
{
    int num = 1;
    while(num <= 10){
        putchar(num);
        num++;
    }
    putchar('\n');
    return (0);
}