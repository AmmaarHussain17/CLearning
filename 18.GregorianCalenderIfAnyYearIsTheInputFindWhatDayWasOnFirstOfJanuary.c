#include<stdio.h>
int main()
{
	int year;
	
	printf("Enter year :");
	scanf("%d",&year);

	int startingYear = 1500;

	year = (year-1) - startingYear;

	//if(year % 100 == 0 || year % 400 == 0 || year % 4 == 0)
	int leapYear = year / 4;

	int remainingYear = year - leapYear;

	int totalDays = (year * 365) + (leapYear * 366) + 1;

	int day = totalDays % 7;

	if(day==0)
	{
        printf("Monday");
	}

    else if(day==1)
    {
        printf("Tuesday");
    }

    else if(day==2)
    {
        printf("Wednesday");
    }

    else if(day==3)
    {
        printf("Thursday");
    }

    else if(day==4)
    {
        printf("Friday");
    }

    else if(day==5)
    {
        printf("Saturday");
    }

    else if(day==6)
    {
        printf("Sunday");
    }

    return 0;
}