#include <stdio.h>
int main()
{
    int n;
    printf("Enter the number");
    scanf("%d",&n);
    if(n<=0)
    {
        printf("Enter a number greater than zero");
        return 1;
    }
    printf("The factors of %d are "  ,n);

    for(int i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            printf("%d ",i);
        }
    }
    return 0;
}