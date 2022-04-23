#include <stdio.h>
void main()
{
    int a,b;
    printf("Enter Two Numbers:");
    scanf("%d%d",&a,&b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("Numbers after Swapping \nA=%d\nB=%d",a,b);
}
