#include "main.h"

/**
* print_alphabet_x10 - prints alphabet ten times
*/

void print_alphabet_x10(void)
{
char ch;
int i;

i = 0;
while (i < 10)
{
for (ch = 97; ch <= 122; ch++)
{
_putchar(ch);
}
_putchar('\n');
i++;
}
}
