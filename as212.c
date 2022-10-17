#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter a number of three digit =");
    scanf("%d",&a);
      b=a%10;
    a=a/10;
    c=a%10;
    a=a/10;
    b=b*10+a;
    b=b*10+c;
    printf("\nReverse= %d",b);
    return 0;
}