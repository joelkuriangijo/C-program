#include<stdio.h>
int main()
{
    int n,r,s=0;
    printf("Enter a number: ");
    scanf("%d",&n);
    while(n!=0)
    {
        r=n%10;
        s+=r;
        n=n/10;
        s=s*10;
    }
    s=s/10;
    while(s!=0)
    {
        r=s%10;
        if(r==0)
        {
            printf("Zero ");
        }
        else if(r==1)
        {
            printf("One ");
        }
        else if(r==2)
        {
            printf("Two ");
        }
        else if(r==3)
        {
            printf("Three ");
        }
        else if(r==4)
        {
            printf("Four ");
        }
        else if(r==5)
        {
            printf("Five ");
        }
        else if(r==6)
        {
            printf("Six ");
        }
        else if(r==7)
        {
            printf("Seven ");
        }
        else if(r==8)
        {
            printf("Eight ");
        }
        else
        {
            printf("Nine ");
        }
        s=s/10;
    }
    return 0;
}
