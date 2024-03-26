#include<stdio.h>
int main()
{
	float fahrenheit;

	printf("Enter fahrenheit :\n");
	scanf("%f", &fahrenheit);

	float centigrade = (fahrenheit - 32) * 0.55;
	printf("centigrade = %f", centigrade);
	
	return 0;
}