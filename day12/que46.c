#include <stdio.h>
#include <math.h>

int armstrong(int n)
{
    int original,rem,digits=0;
    int sum =0;
    original = n;

    while(n!=0)
    {
        digits++;
        n = n/10;
    }
    n=original;

    while(n!=0)
    {
        rem = n%10;
        sum = sum + pow(rem,digits);
        n = n /10;
    }
    return (sum==original);
}
int main()
{
    int num;
    printf("Enter a number");
    scanf("%d",&num);

    if(armstrong(num))
    {
        printf("%d is an armstrong number",num);
    }
    else
    {
        printf("%d is not an armstrong number");
    }
    return 0;
}