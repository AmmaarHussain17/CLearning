#include<stdio.h>
#include<math.h>

int main()
{
	int x;
	printf("Enter point of x:\n");
	scanf("%d",&x);

	int y;
	printf("Enter point of y:\n");
	scanf("%d",&y);

	if(x > 0 && y == 0)
	{
		printf("Point lies on X-axis\n");
	}
	else if(x == 0 && y > 0)
	{
		printf("Point lies on Y-axis\n");
	}
	else if(x == 0 && y == 0)
	{
		printf("Point lies on Origin\n");
	}
	else if(x != 0 && y != 0)
	{
		printf("Point does not lies on X-axis or Y-axis or Origin\n");
	}
	return 0;
}