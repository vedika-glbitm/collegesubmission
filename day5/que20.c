#include <stdio.h>
int main()
{
    int n,originalnum,max_prime =1;
    printf("Enter the number");
    scanf("%d",&n);

    originalnum=n;
    if(n<=1)
    {
        printf("Number less than or equal to 1 do not have prime factors");
        return 0;
    }
    while(n%2==0)
    {
        max_prime=2;
        n =n/2;
    }
    for(int i=3;i*i<=n;i=i+2)
    {
        while(n%i==0)
        {
            max_prime=i;
            n = n/i;
        }
    }
    if(n>2)
    {
        max_prime=n;
    }
    printf("The largest prime factor of %d is %d\n",originalnum,max_prime);
    return 0;
}