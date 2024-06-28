#include<stdio.h>
int main()
{
    float hardness;
    printf("Enter Hardness : ");
    scanf("%f",&hardness);

    float carbon;
    printf("Enter Carbon Content : ");
    scanf("%f",&carbon);

    float tensile;
    printf("Enter Tensile Strength : ");
    scanf("%f",&tensile);


    float condition1;
    float condition2;
    float condition3;


    if(hardness > 50)
    {
        condition1 = 1;
    }
    else 
    {
        condition1 = 0;
    }
    if(carbon < 0.7)
    {
        condition2 = 1;
    }
    else
    {
        condition2 = 0;
    }
    if(tensile > 5600)
    {
        condition3 = 1;
    }
    else
    {
        condition3 = 0;
    }
    


    if(condition1 && condition2 && condition3)
    {
        printf("Steel is Grade 10");
    }
    else if(condition1 && condition2)
    {
        printf("Steel is Grade 9");
    }
    else if(condition2 && condition3)
    {
        printf("Steel is Grade 8");
    }
    else if(condition1 && condition3)
    {
        printf("Steel is Grade 7");
    }
    else if(condition1)
    {
        printf("Steel is Grade 6");
    }
    else
    {
        printf("Steel is Grade 5");
    }

    return 0;
}