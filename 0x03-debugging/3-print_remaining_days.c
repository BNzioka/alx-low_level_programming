#include <stdio.h>
#include "main.h"

int convert_day(int month, int day);

/**
 * main - takes a date and prints how many days are left in the year, taking
 * leap years into account
 * Return: 0
 */
int main(void)
{
	int month = 4;
	int day = 10;
	int year = 1997;

	printf("Date: %02d/%02d/%04d\n", month, day, year);

	print_remaining_days(month, day, year);

	return (0);
}

/**
 * convert_day - converts day of month to day of year, without considering
 * leap years
 * @month: month in number format
 * @day: day of month
 *
 * Return: day of year
 */
int convert_day(int month, int day)
{
	int i, day_of_year = 0;
	int days_in_month[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

	for (i = 1; i < month; i++)
	day_of_year += days_in_month[i - 1];

	day_of_year += day;

	return (day_of_year);
}
