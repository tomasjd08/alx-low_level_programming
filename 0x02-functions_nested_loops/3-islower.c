#include"main.h"
/**
 * _islower - goes here
 * @c: goes here
 * Return: Always 0(success)
 */

int _islower(int c)
	{
		if (c >= 'a' && c <= 'z')
			return (1);
		else
			return (0);
	}
