#include<iostream>

int main()
{
    int n;
    scanf("%d",&n);
    while(n>1)
    {
    if(n%2==0)
    {
        n=n/2;
        printf("%d\n",n);
    }
    else
    {   
        n=3*n+1;
        printf("%d\n",n);

        
    }
    }return 0;
}