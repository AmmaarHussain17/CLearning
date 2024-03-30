#include<stdio.h>
int main()
{
	int A0_verticalMiliMeter = 1189;
	int A0_horizontalMiliMeter = 841;

	int A0 = A0_verticalMiliMeter * A0_horizontalMiliMeter;

	printf("\nA0-verticalMiliMeter = %d\nA0-horizontalMiliMeter = %d\nA0_Size = %d\n\n",A0_verticalMiliMeter,A0_horizontalMiliMeter,A0);

	int A1_horizontalMiliMeter = A0_verticalMiliMeter / 2;
	int A1_verticalMiliMeter = A0_horizontalMiliMeter;

	int A1 = A1_verticalMiliMeter * A1_horizontalMiliMeter;

	printf("A1-verticalMiliMeter = %d\nA1-horizontalMiliMeter = %d\nA1_Size = %d\n\n",A1_verticalMiliMeter,A1_horizontalMiliMeter,A1);


	int A2_horizontalMiliMeter = A1_verticalMiliMeter / 2;
	int A2_verticalMiliMeter = A1_horizontalMiliMeter;

	int A2 = A2_verticalMiliMeter * A2_horizontalMiliMeter;

	printf("A2-verticalMiliMeter = %d\nA2-horizontalMiliMeter = %d\nA2_Size = %d\n\n",A2_verticalMiliMeter,A2_horizontalMiliMeter,A2);

	int A3_horizontalMiliMeter = A2_verticalMiliMeter / 2;
	int A3_verticalMiliMeter = A2_horizontalMiliMeter;

	int A3 = A3_verticalMiliMeter * A3_horizontalMiliMeter;

	printf("A3-verticalMiliMeter = %d\nA3-horizontalMiliMeter = %d\nA3_Size = %d\n\n",A3_verticalMiliMeter,A3_horizontalMiliMeter,A3);

	int A4_horizontalMiliMeter = A3_verticalMiliMeter / 2;
	int A4_verticalMiliMeter = A3_horizontalMiliMeter;

	int A4 = A4_verticalMiliMeter * A4_horizontalMiliMeter;

	printf("A4-verticalMiliMeter = %d\nA4-horizontalMiliMeter = %d\nA4_Size = %d\n\n",A4_verticalMiliMeter,A4_horizontalMiliMeter,A4);

	int A5_horizontalMiliMeter = A4_verticalMiliMeter / 2;
	int A5_verticalMiliMeter = A4_horizontalMiliMeter;

	int A5 = A5_verticalMiliMeter * A5_horizontalMiliMeter;

	printf("A5-verticalMiliMeter = %d\nA5-horizontalMiliMeter = %d\nA5_Size = %d\n\n",A5_verticalMiliMeter,A5_horizontalMiliMeter,A5);

	int A6_horizontalMiliMeter = A5_verticalMiliMeter / 2;
	int A6_verticalMiliMeter = A5_horizontalMiliMeter;

	int A6 = A6_verticalMiliMeter * A6_horizontalMiliMeter;

	printf("A6-verticalMiliMeter = %d\nA6-horizontalMiliMeter = %d\nA6_Size = %d\n\n",A6_verticalMiliMeter,A6_horizontalMiliMeter,A6);


	int A7_horizontalMiliMeter = A6_verticalMiliMeter / 2;
	int A7_verticalMiliMeter = A6_horizontalMiliMeter;

	int A7 = A7_verticalMiliMeter * A7_horizontalMiliMeter;

	printf("A7-verticalMiliMeter = %d\nA7-horizontalMiliMeter = %d\nA7_Size = %d\n\n",A7_verticalMiliMeter,A7_horizontalMiliMeter,A7);


	int A8_horizontalMiliMeter = A7_verticalMiliMeter / 2;
	int A8_verticalMiliMeter = A7_horizontalMiliMeter;

	int A8 = A8_verticalMiliMeter * A8_horizontalMiliMeter;

	printf("A8-verticalMiliMeter = %d\nA8-horizontalMiliMeter = %d\nA8_Size = %d\n\n",A8_verticalMiliMeter,A8_horizontalMiliMeter,A8);

	return 0;
}