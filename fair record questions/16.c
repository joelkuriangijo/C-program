#include<stdio.h>
int main()
{
    int no,i=2,f=0;
    printf("Enter a number:");
    scanf("%d",&no);
    while(i<no)
    {
        if(no%i==0)
        {
            f=1;
            break;
        }
        i++;
    }
    if(f==0)
    {
        printf("%d is a prime number.",no);
    }
    else
    {
        printf("%d is not a prime number.",no);
    }
    return 0;
}