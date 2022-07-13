#include <string.h>
#include "main.h"

void print_rev(char *str)
{
	int i, len = strlen(str);

	for (i = len - 1; i >= 0; i--)
		_putchar(str[i]);

	_putchar('\n');
}
