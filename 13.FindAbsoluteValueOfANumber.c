#include<stdio.h>

int main()
{
	int value1;
	printf("Enter the value :");
	scanf("%d",&value1);

	if(value1 < 0)
	{
		value1 = (-1) * value1;
		printf("Absolute Value = %d",value1);
	}
	else
	{
		printf("Absolute Value = %d",value1);
	}

	return 0;
}