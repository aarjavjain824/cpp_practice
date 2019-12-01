#include<iostream>

int main()
{
    int i,n,k;
    scanf("%d %d",&n,&k);
   

    for(i=1;i<k+1;i++)
    {
        
        printf("%d*%d=%d\n",n,i,n*i);
    }
    return 0;
}