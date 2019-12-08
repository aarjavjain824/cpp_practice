#include<iostream>

void dot(double*v,double*w,int size )
{int sum=0,i;
    for(i=0;i<size;i++)
    {
        sum+=v[i]*w[i];
    }
    for(i=0;i<size;i++)
    {
        v[i]=sum;
    }

}
int main()
{
    int size,i;
    scanf("%d",&size);
    double v[size],w[size];
    for(i=0;i<size;i++)
    {
        scanf("%lf\n%lf",&v[i],&w[i]);
    }
    dot(v,w,size);
    for(i=0;i<size;i++)
    {
        printf("%lf ",v[i]);
    }
}