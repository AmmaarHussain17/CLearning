#include<stdio.h>
int main()
{
	float length,breath;

	printf("Enter length and breath of Rectangle :");
	scanf("%f %f",&length,&breath);

	float AreaOfRectangle = length * breath;
	float PerimeterOfRectangle = 2 * (length + breath);

	printf("AreaOfRectangle = %f\n",AreaOfRectangle);
	printf("PerimeterOfRectangle = %f\n",PerimeterOfRectangle);

	float radius;

	printf("Enter radius of circle :");
	scanf("%f",&radius);

	float AreaOfCircle = 3.14 * radius * radius;
	float CircumferenceOfCircle = 2 * 3.14 * radius;

	printf("AreaOfCircle = %f\n",AreaOfCircle);
	printf("CircumferenceOfCircle = %f\n",CircumferenceOfCircle);
	
	return 0;
}