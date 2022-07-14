#include "main.h"

/**
* main - concatenate two strings and print out the results
*
* Return - Always 0
*/

int main(void){
    char dest[5] = "Hello";
    char src[] = "World\n";
    char *ptr;

    printf("%s\n", dest);
    printf("%s\n", src);
    ptr = _strcat(dest, src);
    printf("%s\n", ptr);
}