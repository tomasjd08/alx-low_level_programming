#include <stdio.h>
/**
 * main-progrtam entry point
 * Description: 'hey'
 * Return:0 success, non zero fail
 */
int main(void)
	{
		int d, p, q;

		for (d = '0'; d < '9'; d++)
			{
				for (p = d + 1; p <= '9'; p++)
				{
					for (q = p + 1; q <= '9'; q++)
					{
						if(p != d && p != q)
						{
							putchar(d);
							putchar(p);
							putchar(q);
							if (d == '7')
								if (p == '8')
								continue;
							putchar(',');
							putchar(' ');
						}
					}
				}
			}
			putchar('\n');
			return (0);
	}

