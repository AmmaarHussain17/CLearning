#include<stdio.h>
int main()
{
	int num;

	printf("Enter 5-Digits Number :");
	scanf("%d",&num);

	int digit_5 = num % 10;
		
	int digit4 = num / 10;

	int digit_4 = digit4 % 10;
	
	int digit3 = digit4 / 10;

	int digit_3 = digit3 % 10;
	
	int	digit2 = digit3 / 10;

	int digit_2 = digit2 % 10;

	int digit1 = digit2 / 10;

	int digit_1 = digit1 % 10;

	int	digitTotal = digit_5 + digit_4 + digit_3 + digit_2 + digit_1;

	printf("Sum is %d",digitTotal);
	 
	return 0;
}