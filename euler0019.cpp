#include <stdio.h>

const int rows = 15;

bool leapyear(int year)
{
	if (year % 400 == 0)
		return true;
	if (year % 100 == 0)
		return false;
	if (year % 4 == 0)
		return true;
	return false;
}

int monthdays(int year, int month)
{
	int days[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
	
	if (month==1) // February
		return (leapyear(year) ? 29 : 28);
	return days[month];
}

int main(void)
{
	int total = 0;
	int weekday = 2; // 1901/1/1 == Tuesday
	
	for (int year = 1901; year <= 2000; year++)
	{
		for (int month = 0; month < 12; month++)
		{
			if (weekday == 0)
				total++;
			weekday = (weekday + monthdays(year, month)) % 7;
		}
	}
	
	printf("%d\n", total);
	return 0;
}
