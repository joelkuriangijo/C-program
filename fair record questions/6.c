#include<Stdio.h>
int main()
{
    char name[10];
    char iname[10];
    int no,price,quantity,total,net,discount;
    printf("Enter the Customer name  :\t");
    scanf("%s",name);
    printf("Enter the Item number  :\t");
    scanf("%d",&no);
    printf("Enter the Item price :\t");
    scanf("%d",&price);
    printf("Enter the Item quantity :\t");
    scanf("%d",&quantity);
    total=price*quantity;
    net=total-discount;
    switch(no)
    {
        case 1:
        {
            printf("Enter the Item name  : Shirt");
            discount=total*5/100;
            break;
        }
        case 2:
        {
            printf("Enter the Item name  :  Churidar");
            discount=total*10/100;
            break;
        }
        case 3:
        {
            printf("Enter the Item name  :  Jeans");
            discount=total*20/100;
            break;
        }
        default:
        {
            printf("Enter the item name");
            scanf("%s",iname);
            discount=total*2/100;
        }
    }
    printf("\n\nCustomer Name  :\t%s",name);
    printf("\nTotal price  :\t%d",total);
    printf("\nDiscount  :\t%d",discount);
    printf("\nNet amount  :\t%d",net);
    printf("\n\n\n\n\n");
    return 0;

}