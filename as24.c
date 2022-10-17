#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter Number in Variable A=");
    scanf("%d",&a);
    printf("\nEnter Numberin variable B=");
    scanf("%d",&b);
    printf("\"Displaying Number before swaping\"");
    printf("\nValue of A is %d Value of B is %d.",a,b);
    /*Swapping Without third variale*/
    a=a+b;
    b=a-b;
    a=a-b;
    printf("\n\"Displaying Number After swaping\"");
    printf("\nValue of A is %d Value of B is %d.",a,b);
}