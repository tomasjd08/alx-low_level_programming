#include"main.h"
/**
 * _islower - goes here
 * @c: goes here
 * return: 0(alwayes)
 */

int _islower(int c)
	{
		if (c >= 'a' && c <= 'z')
			return (1);
		else
			return (0);
	}
