#include<iostream>



int main()
{
    int i,n,j;
    scanf("%d", &n);
    int arr[n];
    int max=0, index=0, temp;
    for(i=0;i<n;i++)
    {
    scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        max=0;
        index=i+1;
        for(j=n-1;j>=i;j--)
        {
            if(arr[j]>max)
            {
                max=arr[j];
                index=j;
            }
        }
        temp = arr[index];
        arr[index]=arr[i];
        arr[i]=temp;
    }
    for(i=0;i<n;i++)
        printf("%d ", arr[i]);
} 