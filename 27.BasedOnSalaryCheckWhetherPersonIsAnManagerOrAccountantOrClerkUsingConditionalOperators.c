#include<stdio.h>
int main()
{
	int salary;
    printf("Enter Salary of the Person :");
    scanf("%d",&salary);

    ((salary >= 25000) && (salary <= 40000)) ? printf("Person is an Manager") : (((salary >= 15000) && (salary < 25000)) ? printf("Person is an Accountant") : printf("Person is an Clerk"));


    return 0;
}