#include<iostream>

int main()
{ 
    int n,m,i;
    scanf("%d",&n);
    for(i=2;i<=n;i++)
    { int sum=0;
        for(m=2;m<i;m++)
        {
            sum=sum+(!(i%m));
            

        }
        if(sum==0)
        {
            printf("%d is prime\n", i);
        }
    }
 
    
            
        


    
    return 0;
}