#include<stdio.h>
#include<math.h>

int main()
{
	int x1;
	printf("Enter Center coordinates of a Circle of X1 :\n");
	scanf("%d",&x1);

	int y1;
	printf("Enter Center coordinates of a Circle of Y1 :\n");
	scanf("%d",&y1);

	int x2;
	printf("Enter point of a Circle of X2 :\n");
	scanf("%d",&x2);

	int y2;
	printf("Enter point of a Circle of Y2 :\n");
	scanf("%d",&y2);

	int radius;
	printf("Enter Radius of a Circle :\n");
	scanf("%d",&radius);

	float distanceFormula = sqrt (pow( x2 - x1 , 2) + pow( y2 - y1 , 2));

	if(distanceFormula > radius)
	{
		printf("point(%d,%d) lies outside the circle",x2,y2);
	}
	else if(distanceFormula < radius)
	{
		printf("point(%d,%d) lies inside the circle",x2,y2);
	}
	else if(distanceFormula == radius)
	{
		printf("point(%d,%d) lies on the circle",x2,y2);
	}

	return 0;
}