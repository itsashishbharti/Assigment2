#include<stdio.h>
int main()
{
    int a,b,c,d;
    printf("\n Enter a Number=");
    scanf("%d",&a);
    d=a;
    b=a%10;
    a=a/10;
    c=a%10;
    a=a/10;
    b=b+c+a;
    printf("\n Three digit number is %d  and the sum of Number is %d. ",d,b);
    return 0;
}