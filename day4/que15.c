//write a program to check armstrong number
#include <stdio.h>
int main()
{
    int n ,originalnum,rem,sum=0;
    printf("Enter the number");
    scanf("%d",&n);

    originalnum=n;
    while(n>0)
    {
        rem=n%10;
        sum=sum + (rem*rem*rem);
        n=n/10;
    }
    if(sum==originalnum)
    {
        printf("%d is an amstrong number",originalnum);
    }
    else
    {
        printf("%d is not amstrong number",originalnum);
    }
    return 0;
}