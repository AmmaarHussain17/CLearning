#include<stdio.h>
int main()
{
	char character1;
    printf("Enter a Alphabet of your choice :");
    scanf("%c",&character1);

     (character1 >= 65 && character1 <= 90 ?
     printf("Alphabet Is Upper Case") : character1 >= 97 && character1 <= 122 ? printf("Alphabet is Lower Case") : printf("Not an Alphabet"));



    char character2,a;
    printf("\n\nNow Enter a Special Symbol of your choice :");
    //scanf("%c",&a);
    scanf("%*c%c",&character2); // By writing asterisk * before %c are telling to ignore the before character which is being entered.

     (character2 >= 0 && character2 <= 47 || character2 >= 58 && character2 <= 64 || character2 >= 91 && character2 <= 96 || character2 >= 123 && character2 <= 127 ? printf("Special Symbol") : printf("Not a Special Symbol"));

    return 0;
}
