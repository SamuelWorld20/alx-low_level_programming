#include "main.h"
#include <stdio.h>
/**
 * jack_bauer - This function prints every minute of the day in 24hrs format.
 *
 * Return: Always 0.
 */
void jack_bauer(void)
{
	int hour, minute;

	for (hour = 0; hour < 24; hour++)
	{
		for (minute = 0; minute < 60; minute++)
		{
			_putchar(hour);
			_putchar(':');
			_putchar(minute);
		}
	}
}
