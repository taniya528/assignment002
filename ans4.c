#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter two numbers");
    scanf("%d%d",&a,&b);
    printf("a=%d b=%d",a,b);
    a=b;
    b=a;
    printf("\na=%d and b=%d",b,a);
    return 0;
}
