#include<stdio.h>

int main()
{
	int x1;
	printf("\nEnter Value of x1 :");
	scanf("%d",&x1);

	int x2;
	printf("\nEnter Value of x2 :");
	scanf("%d",&x2);

	int x3;
	printf("\nEnter Value of x3 :");
	scanf("%d",&x3);

	int y1;
	printf("\nEnter Value of y1 :");
	scanf("%d",&y1);

	int y2;
	printf("\nEnter Value of y2 :");
	scanf("%d",&y2);

	int y3;
	printf("\nEnter Value of y3 :");
	scanf("%d",&y3);

	if(x1 == x2 && x2 == x3 && y1 != y2 && y2 != y3)
	{
		printf("\nThey all fall on same Line\n");
	}
	else if(y1 == y2 && y2 == y3 && x1 != x2 && x2 != x3)
	{
		printf("\nThey all fall on same line\n");
	}
	else 
	{
		printf("\nThey Don't fall on same line\n");
	}

	return 0;
}