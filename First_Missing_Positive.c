#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n],i,j,temp;
    for(i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0; i<n; i++)
    {
        for(j=i+1; j<n; j++)
        {
            if(arr[i]>arr[j])
            {
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    for(i=1; i<=n; i++)
    {
        if(arr[i]!=i)
        {
            printf("%d",i);
            break;
        }
    }
}