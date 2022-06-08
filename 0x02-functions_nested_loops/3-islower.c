#include "main.h"

/**
 * _islower -> checks if the character is lowercase
 *  Return: return 1 or 0 depend on condition
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else 
		return (0);
}
