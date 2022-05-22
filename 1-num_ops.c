#include "main.h"

/**
* print_dec - Print decimal digits
* @arg: Store the arguments
* Return: Print numbers
*/
int print_dec(va_list arg)
{
	unsigned int num_abs, aux_num, zero_count, count = 0;
	int nums;

	nums = va_arg(arg, int);

	if (nums < 0)
	{
		num_abs = (nums * -1);
		count += _putchar(45);
	}
	else
		num_abs = nums;

	aux_num = num_abs;
	zero_count = 1;
	while (aux_num > 9)
	{
		aux_num /= 10;
		zero_count *= 10;
	}

	while (zero_count > 0)
	{
		count += _putchar(((num_abs / zero_count) % 10) + '0');
		zero_count /= 10;
	}
	return (count);
}
/**
* print_int - Prints integers
* @arg: Store list numbers
* Return: Prints number
*/
int print_int(va_list arg)
{
	return (print_d(arg));
}
