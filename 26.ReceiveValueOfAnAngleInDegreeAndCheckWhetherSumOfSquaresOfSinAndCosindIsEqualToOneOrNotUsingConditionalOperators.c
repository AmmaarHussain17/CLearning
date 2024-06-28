#include<stdio.h>
#include<math.h>

int main()
{
	float angleInDegrees;
    printf("Enter Angle in Degrees :");
    scanf("%f",&angleInDegrees);

    float angle = angleInDegrees * (3.14 / 180);

    int sum  = cos(angle) + sin(angle);

    (sum == 1) ? printf("Sum of Squares is Zero") : printf("Sum of Squares is Non-Zero");

    return 0;
}