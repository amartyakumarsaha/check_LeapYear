#include<stdio.h>
void check_leapYear();
int main()
{
	int year;
	scanf("%d",&year);
	check_leapYear(year);
}
void check_leapYear(int year)
{
	if(year%4==0)
	{
		printf("%d is leap year",year);
	}
	else
	{
		if(year%100==0 && year%400==0)
		{
			printf("%d is leap year",year);
		}
		else
		{
			printf("%d is not leap year",year);
		}
	}
}
