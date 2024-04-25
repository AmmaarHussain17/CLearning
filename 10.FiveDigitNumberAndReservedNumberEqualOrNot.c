#include<stdio.h>

int main()
{
	int digit;

	printf("Enter 5 digit number :\n");
	scanf("%d",&digit);

	int a  = digit / 10;
	int d1 = digit % 10;

	int b  = a / 10;
	int d2 = a % 10;

	int c  = b / 10;
	int d3 = b % 10;

	int d  = c / 10;
	int d4 = c % 10;

	int d5 = d;

	int reverse = d1 * 10000  +  d2 * 1000  +  d3 * 100  +  d4 * 10  +  d5;

	if(digit == reverse)

		printf("%d = %d",digit,reverse);

	else
		
		printf("%d != %d",digit,reverse);

	return 0;
}