#include "main.h"

/**
* main - concatenate two strings and print out the results
*
* Return - Always 0
*/

char *_strcat(char *dest, char *src)

{

int index = 0;
int dest_len = 0;

while (dest[index++])
dest_len++;
for (index = 0; src[index]; index++)
dest[dest_len++] = src[index];
return (dest);

}