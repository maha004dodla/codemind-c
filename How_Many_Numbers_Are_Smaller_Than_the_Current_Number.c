#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n],i,j;
    for(i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0; i<n; i++)
    {
        int c=0;
        for(j=0; j<n; j++)
        {
            if(arr[i]>arr[j])
            {
                c++;
            }
        }
        printf("%d ",c);
    }
}