#include<stdio.h>
#include<math.h>

int main()
{
	float x;
	float y;

	printf("Enter Cartesian Co-ordinates (x , y) :\n");
	scanf("%f %f",&x,&y);

	float r = sqrt(x * x + y * y);

	float phi = atan(y / x);

	printf("%f\n",y / x);

	printf("Square Root = %f\n",r);

	printf("Phi = %f",phi);

	return 0;
}