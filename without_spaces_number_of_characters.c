#include<stdio.h>
int main()
{
    int i,count=0;
    char s[100];
    scanf("%[^
]%*s",s);
    for(i=0; s[i]!=NULL; i++)
    {
        if(s[i]!=' ')
        {
            count++;
        }
    }
    printf("%d",count);
}