#include <stdio.h>
int main()
{
    int n,r,binary_val=0,p=1;
    printf("Enter a decimal number");
    scanf("%d",&n);
    while(n>0)
    {
        r =n%2;
        binary_val=binary_val+(r*p);
        n = n/2;
        p = p*10;
    }
    printf("Binary number= %d\n",binary_val);
    return 0;
    
}