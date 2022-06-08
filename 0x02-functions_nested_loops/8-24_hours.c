#include "main.h"

/**
 * jack_bauer - Day
 * Return: 0
 */

void jack_bauer(void)
{
	int d = 0;
	int om = 0, tm = 0;
	int oh = 0, th = 0;

	while (d < 1440)
	{
		_putchar(th + '0');
		_putchar(oh + '0');
		_putchar(':');
		_putchar(tm + '0');
		_putchar(om + '0');
		_putchar('\n');
		om++;

		if (om > 9)
		{
			om = 0;
			tm++;
		}

		if (tm > 5)
		{
			tm = 0;
			oh++;
		}

		if (oh > 9)
		{
			oh = 0;
			th++;
		}

		d++;
	}
}
