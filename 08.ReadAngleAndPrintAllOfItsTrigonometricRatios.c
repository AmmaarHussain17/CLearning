#include<stdio.h>
#include<math.h>

int main()
{
	int angle;
	printf("Enter angle :\n");
	scanf("%d",&angle);

	float degree = angle * (3.14 / 180);

	printf("sin(%d)   = %f\n",angle,sin(degree));
	printf("cos(%d)   = %f\n",angle,cos(degree));
	printf("tan(%d)   = %f\n",angle,tan(degree));
	printf("cosec(%d) = %f\n",angle,1/sin(degree));
	printf("sec(%d)   = %f\n",angle,1/cos(degree));
	printf("cot(%d)   = %f",angle,1/tan(degree));

	return 0;
}