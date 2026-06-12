#include <stdio.h>
int palindrome(int n)
{
    int original =n,rev = 0,rem ;
    while(n>0)
    {
        rem = n%10;
        rev = rev *10 +rem;
        n = n/10;
    }
    if(original==rev)
    return 1;
    else
    return 0;
}

int main()
{
    int num;
    printf("Enter a number");
    scanf("%d",&num);

    if(palindrome(num))
    {
        printf("Palindrome number");
    }
    else
    {
        printf("Not a palindrome number");
    }
    return 0;
}