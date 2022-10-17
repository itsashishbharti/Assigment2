#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter A Number=");
    scanf("%d",&a);
    b=a/10;
    printf("\nEntered number is %d and last digit change with zero %d",a,b*10);
    return 0;

}