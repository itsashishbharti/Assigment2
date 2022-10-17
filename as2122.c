#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter a number=");
    scanf("%d",&a);
    b=a%10;/*Find unit place of any number*/
    c=a/10;/*Print number without last digit*/
    printf("\n unit digit of %d is %d.",a,b);
    printf("\n Number is %d and without last digit is %d.",a,c);
    return 0;
}