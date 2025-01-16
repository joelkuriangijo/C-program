#include<stdio.h>
int main()
{
    int no,r,temp,s,ctr=1;
    while(ctr<1000)
    {
        no=ctr;
        temp=no;
        s=0;
        

        while(no>0)
        {
            r=no%10;
            s=s+r*r*r;
            no=no/10;
        }


        if(s==temp)
        {
            printf("\n\n%d",temp);
        }
        

        ctr=ctr+1;
    }


    return 0;
}