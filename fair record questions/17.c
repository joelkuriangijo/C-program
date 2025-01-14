#include<stdio.h>
int main()
{
    int a=0,b=1,m=0,no;
    printf("Enter a positive number:\t");
    scanf("%d",&no);
    printf("Fibonacci series:\t%d,\t%d,", a,b);
    m=a+b;

    while(m<=no)
    {
        printf("\t%d,",m);
        a=b;
        b=m;
        m=a+b;
    }
}