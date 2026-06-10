//write a program to print prime number in a range 
#include <stdio.h>
int main()
{
    int start ,end ,i , j , prime;
    printf("Enter start");
    scanf("%d",&start);
    printf("Enter end");
    scanf("%d",&end);
    printf("Prime numbers \n",start,end);

    for(i=start;i<=end;i++)
    {
        if(i<=1)
        {
            continue;
        }
        prime =1;
        for(j=2;j<i;j++)
        {
            if(i%j==0)
            {
                prime =0;
                break;
            }
        }
        if(prime==1)
        {
            printf("%d",i);
        }

    }
    printf("\n");
    return 0;

}