#include<stdio.h>
#include<math.h>

int main()
{
	float temparature;
	printf("Enter Temparature :\n");
	scanf("%f",&temparature);

	float velocity;
	printf("Enter Velocity :\n");
	scanf("%f",&velocity);

	float WindChillFactor = 35.74 + 0.6215 * temparature + 0.4275 * temparature - 35.76 * velocity * 0.16;

	printf("Wind Chill Factor = %f",WindChillFactor);

	return 0;
}