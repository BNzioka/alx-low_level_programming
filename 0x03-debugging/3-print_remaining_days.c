#include <stdio.h>
#include "main.h"
/**
 * print_remaining_days - prints the remaining days in a year
 * @month: month in number format
 * @day: day of month
 * @year: year
 *
 * Return: no return value
 */
void print_remaining_days(int month, int day, int year)
{
	int leap = 0;

	if ((year % 4 == 0 && 100 != 0) || (year % 400 == 0))
		leap = 1;

	if (leap && month >= 3)
		day++;

	if (month == 2 && day == 60 && !leap)
	{
		printf("Invalid date: %02d/%02d/%04d\n", month, day - 31, year);
	}
	else
	{
		printf("Day of the year: %d\n", day);
		printf("Remaining days: %d\n", (leap ? 366 : 365) - day);
	}
}
