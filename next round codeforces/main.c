#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,n,k,arr[200],count=0,max;
    scanf("%d %d",&n,&k);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
         max;
        if(i+1==k)
        {
            max=arr[i];
        }
    }
    for(int j=0;j<n;j++)
    {
        if(arr[j]>=max&&arr[i]>0)
            count++;
    }
    printf("%d",count);
    return 0;
}
