#include<stdio.h>
int main()
{
	int number1;
    printf("Enter a First number of your choice :");
    scanf("%d",&number1);

    int number2;
    printf("Enter a Second number of your choice :");
    scanf("%d",&number2);

    int number3;
    printf("Enter a Third number of your choice :");
    scanf("%d",&number3);

    int store = (number1 > number2 && number1 > number3) ? (number1) : ((number2 > number3) ? (number2) : (number3));

    printf("%d is Biggest",store);

    return 0;
}