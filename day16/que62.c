#include <Stdio.h>
int main()
{
    int n,i,j,maxfreq=0,element;
    printf("Enter size of arrray: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter array elements:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        int count = 1;
        for (j=i+1;j<n;j++)
        {
            if(arr[i]==arr[j])
            {
                count ++;
            }
        }
        if(count>maxfreq)
        {
            maxfreq=count;
            element=arr[i];
        }
    }
    printf("Maximum frequency element is %d\n",element);
    printf("Frequency is %d",maxfreq);

    return 0;
}