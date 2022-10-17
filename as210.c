#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter a number=");
    scanf("%d",&a);
    printf("\nEnter A digit");
    scanf("%d",&b);
    printf("\nEntered number is %d and Entered digit is %d after append number is %d",a,b,a*10+b);
    return 0;
}