#include<stdio.h>
int main()
{
	int year;
    printf("Enter a Year of your choice :");
    scanf("%d",&year);

    ((year % 400 == 0) || (year % 100 != 0) && (year % 4 == 0)) ? printf("It is a Leap Year") : printf("It is not a Leap Year");

    return 0;
}