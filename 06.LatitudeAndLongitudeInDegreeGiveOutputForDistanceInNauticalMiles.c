#include<stdio.h>
#include<math.h>

int main()
{
	float L1;
	float L2;
	float G1;
	float G2;

	printf("Enter the latitude (L1 , L2) :\n");
	scanf("%f %f",&L1,&L2);

	printf("Enter the latitude (G1 , G2) :\n");
	scanf("%f %f",&G1,&G2);

	float D = 3963 * acos(sin(L1) * sin(L2) + cos(L1) * cos(L2) * cos(G2 - G1));

	printf("Distance in Nautical Miles = %d",D) ;

	return 0;
}