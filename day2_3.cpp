#include<iostream>

int main()
{
    int i,n;
    float sum=0;
    scanf("%d",&n);

for(i=1;i<n+1;i++)
{
    sum=sum+1.0/i;
}
printf("%f",sum);
    return 0;
}