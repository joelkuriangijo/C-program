#include<stdio.h>
int main()
{
    int n1,n2,n3;
    printf("Enter three numbers\t");
    scanf("%d%d%d",&n1,&n2,&n3);
    if(n1>n2 && n1>n3)
    {
        printf("%d is greater than %d and %d\n",n1,n2,n3);
    }
    else if(n2>n1 && n2>n3)
    {
        printf("%d is greater than %d and %d\n",n2,n1,n3);
    }
    else
    {
        printf("%d is greater than %d and %d\n",n3,n1,n2);
    }
    return 0;


}