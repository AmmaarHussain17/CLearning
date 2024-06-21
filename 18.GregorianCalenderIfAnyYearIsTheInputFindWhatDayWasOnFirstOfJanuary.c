#include<stdio.h>
int main()
{
	int year;
	
	printf("Enter year :");
	scanf("%d",&year);

	int day = 365 * year + (year -  1) / 4 - (year - 1) / 100 + (year - 1) / 400;

	int totalDays = day % 7;

	if(totalDays == 1)
	{
        printf("Monday");
	}

    else if(totalDays == 2)
    {
        printf("Tuesday");
    }

    else if(totalDays == 3)
    {
        printf("Wednesday");
    }

    else if(totalDays == 4)
    {
        printf("Thursday");
    }

    else if(totalDays == 5)
    {
        printf("Friday");
    }

    else if(totalDays == 6)
    {
        printf("Saturday");
    }

    else if(totalDays == 7)
    {
        printf("Sunday");
    }

    return 0;
}