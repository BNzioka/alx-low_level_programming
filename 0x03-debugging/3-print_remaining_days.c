#include <stdio.h>
#include "main.h"

/**
 * print_remaining_days - takes a date and prints how
 * many days they are left in the year, taking leap years
 * into account
 * @month: month in number format
 * @day: day of month
 * @year: year
 * Return: void
 */

void print_remaining_days(int month, int day, int year)
{
	if (year % 4 == 0 || (year % 400 == 0 && year % 100 == 0))
	{
	if (month > 2 && day > 60)
	{
	day++;
	}
	printf("Day of the year: %d\n", day);
	printf("Remaining days: %d\n", 366 - day);
	}
	else
	{
	if (month == 2 && day == 60)
	{
	printf("Invalid date: %02d/%02d/%04d\n", month, day - 31, year);
	}
	else
	{
	printf("Day of the year: %d\n", day);
	printf("Remaining days: %d\n", 365 - day);
	}
	}
}

/**
 * main - tests the print_remaining_days function
 * Return: 0
 */

int main(void)
{
	print_remaining_days(2, 29, 2020);
	print_remaining_days(3, 1, 2020);
	print_remaining_days(12, 31, 2020);
	print_remaining_days(2, 29, 2021);
	print_remaining_days(6, 15, 2021);

	return (0);
}
