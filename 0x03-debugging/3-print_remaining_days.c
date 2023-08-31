#include "main.h"
#include <stdio.h>

/**
 * positive_or_negative - prints whether a number is positive, negative, or zero
 * @i: integer to be checked
 *
 * Return: no return value
 */
void positive_or_negative(int i)
{
	if (i == 0)
	printf("%d is zero\n", i);
	else if (i > 0)
		printf("%d is positive\n", i);
	else
		printf("%d is negative\n", i);
}

/**
 * largest_number - returns the largest of three integers
 * @a: first integer to be checked
 * @b: second integer to be checked
 * @c: third integer to be checked
 *
 * Return: the largest integer
 */
int largest_number(int a, int b, int c)
{
	if (a >= b && a >= c)
		return (a);
	else if (b >= a && b >= c)
		return (b);
	else
		return (c);
}

/**
 * convert_day - converts day of month to day of year, without accounting for leap year
 * @month: month in number format
 * @day: day of month
 *
 * Return: day of year
 */
int convert_day(int month, int day)
{
	int days_in_month[] = {0, 31, 59, 90, 120, 151, 181, 212, 243, 273, 304, 334};

	return (days_in_month[month - 1] + day);
}

/**
 * calculate_day_of_year - calculates the day of year, accounting for leap year
 * @month: month in number format
 * @day: day of month
 * @year: year
 *
 * Return: day of year
 */
int calculate_day_of_year(int month, int day, int year)
{
	int leap = 0, total = 0, i;

	for (i = 1; i <= month - 1; i++)
		{
			if (i == 2)
		{
			if (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0))
				total += 29;
			else
				total += 28;
		}
	else if (i == 4 || i == 6 || i == 9 || i == 11)
		total += 30;
	else
		total += 31;
	}

	total += day;
	if (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0) && month > 2)
		leap = 1;

	return (leap ? total + 1 : total);
}

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
