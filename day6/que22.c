#include <stdio.h>
int main()
{
    int n,r,decimal_val =0,p=1;
    printf("Enter binary number");
    scanf("%d",&n);
    
    while(n>0)
    {
        r = n%10;
        decimal_val=decimal_val+(r*p);
        n = n/10;
        p = p*2;
    }
    printf("Decimal number =%d\n",decimal_val);
    return 0;
    
}