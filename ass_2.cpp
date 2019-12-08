#include<iostream>

int main()
{
    int a,b;
    char oper;

scanf("%d%c%d",&a,&oper,&b);
if(oper=='+')
{
    printf("result=%d",a+b);
}
else if(oper=='-')
    {
        printf("result=%d",a-b);

    }
    else if(oper=='*')
        {
            printf("result=%d",a*b);

        }
        else if(oper=='/')
            {
                printf("result=%f",a*1.0/b);
            }
            else
            {
                printf("invalid operation");
            }

}