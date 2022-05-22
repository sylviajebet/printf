#include "main.h"

/**
 * print_char - Prints characters
 * @arg: Stores list of characters
 * Return: Number of characters printed
 */
int print_char(va_list arg)
{
	int c = va_arg(arg, int);

	return (_putchar(c));
}

/**
* print_str - Prints a string
* @arg: Stores list of strings
* Return: Number of strings printed
*/
int print_str(va_list arg)
{
	int i, count = 0;
	char *str;

	str = va_arg(arg, char *);
	if (str == NULL)
		str = "(null)";

	for (i = 0; str[i]; i++)
		count += _putchar(str[i]);

	return (count);
}
