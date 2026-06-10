#include <stdio.h>
int main()
{
    int x,n,result =1;
    printf("Enter base");
    scanf("%d",&x);
    printf("Enter power");
    scanf("%d",&n);

    while(n>0)
    {
        result=result*x;
        n = n-1;
    }
    printf("Result =%d\n",result);
    return 0;
}