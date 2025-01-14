#include<stdio.h>
int main()
{
    int num,sum=0,temp,r;
    printf("Enter a number: ");
    scanf("%d",&num);
    temp=num;
    while(num>0)
    {
        r=num%10;
        sum=sum+r*r*r;
        num=num/10;
    }
    if(sum==temp)
    {
        printf("%d is an Armstrong number.",temp);
    }
    else
    {
        printf("%d is not an Armstrong number.",temp);
    }
}