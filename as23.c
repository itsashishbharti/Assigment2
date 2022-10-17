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
    c=a;
    a=b;/*Swapping process.......*/
    b=c;
    printf("\n\"Displaying After Swapping\"");
    printf("\nValue of A is %d Value of B is %d.",a,b);
    return 0;

}