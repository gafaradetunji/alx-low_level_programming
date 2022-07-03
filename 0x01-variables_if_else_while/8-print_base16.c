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