#include "main.h"
#include <stdio.h>

/**
 * print_remaining_days - takes a date and prints how many days are
 * left in the year, taking leap years into account
 * @month: month in number format
 * @day: day of month
 * @year: year
 *
 * Description: This function takes a date and determines how many days
 * are left in the year, taking leap years into account.
 *
 * Return: void
 */

void print_remaining_days(int month, int day, int year)
{
	if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
	{
	if (month > 2)
		day++;
	printf("Day of the year: %d\n", 31 + 29 + day);
	printf("Remaining days: %d\n", 366 - (31 + 29 + day));
	}
	else
	{
	printf("Day of the year: %d\n", calculate_day_of_year(month, day));
	printf("Remaining days: %d\n", 365 - calculate_day_of_year(month, day));
	}
}

/**
 * calculate_day_of_year - calculates the day of the year
 * @month: month in number format
 * @day: day of month
 *
 * Description: This function calculates the day of the year.
 *
 * Return: day of year
 */

int calculate_day_of_year(int month, int day)
{
	int i, day_of_year = 0;
	int days_in_month[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

	for (i = 1; i < month; i++)
	day_of_year += days_in_month[i - 1];

	day_of_year += day;

	return (day_of_year);
}
