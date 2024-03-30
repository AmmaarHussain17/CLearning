#include<stdio.h>

int main()
{
	int a;
	printf("Enter value of a :\n");
	scanf("%d",&a);

	int b;
	printf("Enter value of b :\n");
	scanf("%d",&b);

	printf("Before Interchanging a = %d\n",a);
	printf("Before Interchanging b = %d\n\n",b);

	int temp;

	temp = a;
	a = b;
	b = temp;

	printf("After Interchanging a = %d\n",a);
	printf("After Interchanging b = %d",b);

	return 0;
}