//write a program to find nth fibonaaci term
#include <stdio.h>
int main()
{
    int n,a=0,b=1,next;
    printf("Enter the position");
    scanf("%d",&n);
    for(int i=1;i<n;i++)
    {
        next =a+b;    
        a=b;
        b=next;
    }
    printf("The %dth fibonacci term is %d",n,a);
    return 0;


}