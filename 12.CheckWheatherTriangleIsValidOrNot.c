#include<stdio.h>

int main()
{
	int angle1;

	printf("\nEnter First angle of Triangle : ");
	scanf("%d",&angle1);


	int angle2;

	printf("\nEnter Second angle of Triangle : ");
	scanf("%d",&angle2);

	int angle3;

	printf("\nEnter Third angle of Triangle : ");
	scanf("%d",&angle3);


	if(angle1 + angle2 + angle3 == 180)
	{
		printf("\nTriangle is Valid\n");
	}
	else
	{
		printf("\nTriangle is not Valid\n");
	}

	return 0;
}