#include<stdio.h>
int main()
{
	int side1;
    printf("Enter First Side of The Triangle :");
    scanf("%d",&side1);

    int side2;
    printf("Enter Second Side of The Triangle :");
    scanf("%d",&side2);

    int side3;
    printf("Enter Third Side of The Triangle :");
    scanf("%d",&side3);

    if((side1 == side2 && side2 != side3) || (side2 == side3 && side3 != side1) || (side3 == side1 && side1 != side2))
    {
        printf("It is Isosceles Triangle");
    }
    else if((side1 == side2) && (side2 == side3) && (side3 == side1))
    {
        printf("It is Equilateral Triangle");
    }
    else if((side1 != side2) && (side2 != side3) && (side3 != side1))
    {
        printf("It is Scalene Triangle");
    }
   // else if(side1 + side2 + side3 == 180)
   // {
   //     printf("It is Right-angled Triangle");
   // }
    else
    {
        printf("Not a Triangle");
    }

    return 0;
}