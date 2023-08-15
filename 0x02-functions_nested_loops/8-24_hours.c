#include "main.h"

/**
 * jack_bauer - print all minutes .
 * and hours of 24h
 * @ minute: minutes of the day.
 * @ hour: hours of the day
 */
void jack_bauer(void)
{
	int minute, hour;

	for (hour = 0; hour < 24; hour++)
	{
		for (minute = 0; minute < 60; minute++)
		{
			_putchar((hour / 10) + '0');
			_putchar((hour % 10) + '0');
			_putchar(':');
			_putchar((minute / 10) + '0');
			_putchar((minute / 10) + '0');
			_putchar('\n');
		}
	}
}
