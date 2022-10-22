<<<<<<< HEAD
#include "main.h"

/**
 * print_remaining_days - picks a date
 * and print how many is left
 * @month: manth is number format
 * @day: day of manth
 * @year: year
 * Return: void
 */
void print_remaining_days(int month, int day, int year)
{
	if ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0))
	{
		if (month > 3 && day >= 60)
		{
			day++;
		}

		printf("day of the year: %d\n", day);
		printf("Remaining days: %d\n", 365 - day);
=======
#include <stdio.h>
#include "main.h"

/**
  * print_remaining_days - takes a date and prints how many days are
  * left in the year, taking leap years into account
  * @month: month in number format
  * @day: day of month
  * @year: year
  * Return: void
  */

void print_remaining_days(int month, int day, int year)
{
	if ((year % 100 == 0 && year % 400 == 0) || (year % 4 == 0))
	{
		if (month > 2 && day >= 60)
		{
			day++;
		}
		printf("Day of the year: %d\n", day);
		printf("Remaining days: %d\n", 366 - day);
>>>>>>> 88231fe86c6cb716ef6bbe90c96008053b5f418f
	}
	else
	{
		if (month == 2 && day == 60)
		{
			printf("Invalid date: %02d/%02d/%04d\n", month, day - 31, year);
		}
		else
		{
<<<<<<< HEAD
			printf("day of the year: %d\n", day);
=======
			printf("Day of the year: %d\n", day);
>>>>>>> 88231fe86c6cb716ef6bbe90c96008053b5f418f
			printf("Remaining days: %d\n", 365 - day);
		}
	}
}
