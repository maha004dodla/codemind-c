#include <stdio.h>
int main()
{
    double fact;
    int k,i,m,n;
    scanf("%d", &n);
    for (i=n; i>0; i--)
    {
        fact=1;
        scanf("%d", &m);
        for(k=2; k<=m; k++)
        {
            fact=fact*k;
        }
        printf("%.0lf
", fact);
    }
    return 0;
}