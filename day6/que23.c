#include <stdio.h>
int main()
{
    int n,r,count=0;
    printf("Enter the number");
    scanf("%d",&n);

    while(n>0)
    {
        r =  n%2;

        if(r==1)
        {
            count = count +1;
        }
        n = n/2;
    }
    printf("Total set bits =%d\n",count);
    return 0;
}