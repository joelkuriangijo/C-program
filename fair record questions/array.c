#include<stdio.h>
int main()
{
    int ar[10],i;
    printf("Enter values of array");
    for(i=0;i<10;i++){
        printf("Enter the values of %d",i);
        scanf("%d",&ar[i]);
    }
printf("Array is \n");
    for(i=0;i<10;i++)
        {
            printf("%d",ar[i]);
        }

}