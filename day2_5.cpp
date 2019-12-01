#include<iostream>

int is_prime(int n)
{ int i,a=1;
 for(i=2;i<n;i++)
 {
        if(n%i==0)
        {
            a=0;
            break;
        }
 }
 return a;
}
int main()
{
    int n=9;
    if(is_prime(n))
    {
        printf("it is prime");
    }
    else
    {
        printf("composite");
    }
}