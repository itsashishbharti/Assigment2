#include<stdio.h>
int main()
{
    float a,b;
    printf("Enter Amount in Indian Rupess=");
    scanf("%f",&a);
    b=a/76.23;
    printf("\n %.2f IND = %.2f USD $",a,b);
    return 0;
}