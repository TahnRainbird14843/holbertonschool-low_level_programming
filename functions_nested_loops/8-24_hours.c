#include "main.h"

/**
 * jack_bauer - prints every minute of the day in 24hr time
 *
 * Return: 0 always
 */
int jack_bauer(void)
{
	int h = 0;

	while (h < 24)
	{
		int m = 0;
		while (m < 60)
		{
			int th = (h - (h % 10)) / 10;
			int sh = h % 10;
			int tm = (m - (m % 10)) / 10;
			int sm = m % 10;

			_putchar('0' + th);
			_putchar('0' + sh);
			_putchar(':');
			_putchar('0' + tm);
			_putchar('0' + sm);
			_putchar('\n');

			m++;
		}
		h++;
	}
}
