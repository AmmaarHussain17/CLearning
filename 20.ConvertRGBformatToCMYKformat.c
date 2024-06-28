#include<stdio.h>
int main()
{
	float red;
    printf("Enter value of colour Red (0 to 255) :");
    scanf("%f",&red);

    float green;
    printf("Enter value of colour Green (0 to 255) :");
    scanf("%f",&green);

    float blue;
    printf("Enter value of colour Blue (0 to 255) :");
    scanf("%f",&blue);

    float redForm   = red / 255;
    float greenForm = green / 255;
    float blueForm  = blue / 255;

    float white;

    if(redForm > greenForm && redForm > blueForm)
    {
        white = redForm;
    }
    else if(greenForm > redForm && greenForm > blueForm)
    {
        white = greenForm;
    }
    else if(blueForm > redForm && blueForm > greenForm)
    {
        white = blueForm;
    }

    printf("White = %f\n",white);


    float cyan = (white - redForm) / white;

    printf("Cyan = %f\n",cyan);


    float magenta = (white - greenForm) / white;

    printf("Magenta = %f\n",magenta);


    float yellow = (white - blueForm) / white;

    printf("Yellow = %f\n",yellow);


    float black = 1 - white;

    printf("Black = %f\n",black); 

    return 0;
}