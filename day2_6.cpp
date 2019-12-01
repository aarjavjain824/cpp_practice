#include<iostream>

int main()
{
    int i,m,n,sum=0;
    scanf("%d\n",&n);
    int v[n][n];
    for(i=0;i<n;i++)
    {
        for(m=0;m<n;m++)
        {
            scanf("%d", &v[i][m]);
        }
    }
    for(i=0;i<n;i++)
    {
        for(m=0;m<n;m++)
        {
            printf("%d ",v[i][m]);
            if(i=m)
            {
                sum=sum+v[i][n];
            }
        }
        printf("\n");
    }
    printf("\n%d",sum);
    return 0;
}