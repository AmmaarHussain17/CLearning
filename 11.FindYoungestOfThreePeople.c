#include<stdio.h>

int main()
{
	int ram;

	printf("Enter age of Ram : ");
	scanf("%d",&ram);


	int shyam;

	printf("Enter age of Shyam : ");
	scanf("%d",&shyam);

	int ajay;

	printf("Enter age of Ajay : ");
	scanf("%d",&ajay);


	if(ram < shyam && ram < ajay)
	{
		printf("\nRam is youngest");
	}
	if(shyam < ram && shyam < ajay)
	{
		printf("\nShyam is youngest");
	}
	else if(ajay < shyam && ajay < ram)
	{
		printf("\nAjay is youngest");
	}


	return 0;
}