#include<stdio.h>
int main()
{
    int weightOfThePerson;
    printf("Enter Weight of The Person (In Kilograms) : ");
    scanf("%d",&weightOfThePerson);

    float heightOfThePerson;
    printf("Enter Heigth of the Person (In Meters) : ");
    scanf("%f",&heightOfThePerson);

    float BodyMassIndex = weightOfThePerson / (heightOfThePerson * heightOfThePerson);
    printf("BodyMassIndex (BMI) = %f\n",BodyMassIndex);

    if(BodyMassIndex < 15)
    {
        printf("BMI category is Starvation");
    }
    else if(BodyMassIndex >= 15.1  &&  BodyMassIndex <= 17.5)
    {
        printf("BMI category is Anorexic");
    }
    else if(BodyMassIndex >= 17.6  &&  BodyMassIndex <= 18.5)
    {
        printf("BMI category is Underweight");
    }
    else if(BodyMassIndex >= 18.6  &&  BodyMassIndex <= 24.9)
    {
        printf("BMI category is Ideal");
    }
    else if(BodyMassIndex >= 25  &&  BodyMassIndex <= 25.9)
    {
        printf("BMI category is Overweight");
    }
    else if(BodyMassIndex >= 30  &&  BodyMassIndex <= 30.9)
    {
        printf("BMI category is Obese");
    }
    else if(BodyMassIndex >= 40)
    {
        printf("BMI category is Morbidly Obese");
    }

    return 0;
}
