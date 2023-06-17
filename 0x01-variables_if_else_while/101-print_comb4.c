#include <stdio.h>
/**
 * main-progrtam entry point
 * Description: 'hey'
 * Return: Always 0 (Success)
 */
int main(void)
	{
		int c;
		int d;
		int e = 0;

		while (e < 10)
		{
			d = 0;
			while (d < 10)
			{
				c = 0;
				while (c < 10)
				{
					if (c != d && d != e && e < d && d < c)
					{
						putchar('0' + e);
						putchar('0' + d);
						putchar('0' + c);

						int sum = c + d + e;
						int targetSum = 9 + 8 + 7;
						if (sum != targetSum)
						{
							putchar(',');
							putchar(' ');
						}
					}
					c++;
				}
				d++;
			}
			e++;
		}
		putchar('\n');
		return (0);
	}

