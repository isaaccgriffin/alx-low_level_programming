#include "main.h"

/**
* puts2 - Prints every other character of a string
* @str: String to be treated
* Return: Void
*/

void puts2(char *str)

{
int i;
int j = 0;

while (str[j] != '\0')
{
j++;
}

for (i = 0; i < j; i += 2)
{
-putchar(str[i]);
}
_putchar('\n');
}
