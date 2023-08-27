#include "main.h"
/* more headers goes there */

/**
 * positive_or_negative - function that prints + or -
 *
 * Description: A program that prints n as positive
 * or negative or equal to zero
 *
 * Return: value is 0
 *
*/
void positive_or_negative(int i)
{
				
		if (i > 0)
		{
			printf("%i is positive\n", i);
			}
		else if (i == 0)
		{
			printf("%d is zero\n", i);
		}
		else
		{
			printf("%d is negative\n", i);
		}
}
