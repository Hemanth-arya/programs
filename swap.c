#include <stdio.h>

int main()
{
    int a,b;
    printf("enter the any two numbers\n");
    scanf("%d%d",&a,&b);
    
    a=a+b;
    b=a-b;
    a=a-b;
    printf("the numbers after swaping are a=%dand b=%d",a,b);
return 0;
}
