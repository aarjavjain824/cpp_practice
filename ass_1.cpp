#include<iostream>
int mode(int* a,int b)
{
    *a=*a%b;
    return *a;
}
int main()
{
    int n;
    scanf("%d",&n);
    int m=n;
    printf("no. of 2000 notes=%d\n",n/2000);
    printf("no. of 500 notes=%d\n",mode(&m,2000)/500);
    printf("no. of 200 notes=%d\n",mode(&m,500)/200);
    printf("no. of 100 notes=%d\n",mode(&m,200)/100);
    printf("no. of 50 notes=%d\n",mode(&m,100)/50);
    printf("no. of 20 notes=%d\n",mode(&m,50)/20);
    printf("no. of 10 notes=%d\n",mode(&m,20)/10);
    printf("no. of 5 notes=%d\n",mode(&m,10)/5);
    printf("no. of 2 notes=%d\n",mode(&m,5)/2);
    printf("no. of 1 notes=%d\n",mode(&m,2)/1);
}