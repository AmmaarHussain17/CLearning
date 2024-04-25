#include<stdio.h>

int main()
{
	int lenght;
	printf("Enter the lenght of Rectangle :");
	scanf("%d",&lenght);

	int breadth;
	printf("Enter the breadth of Rectangle :");
	scanf("%d",&lenght);

	if(lenght > breadth)
	{
		printf("Area of the Rectangle is Greater than its Perimeter");
	}
	else if(lenght < breadth)
	{
		printf("Area of the Rectangle is Not Greater than its Perimeter");
	}
	else if(lenght == breadth)
	{
		printf("It is not a Rectangle It is a Square");
	}

	return 0;
}