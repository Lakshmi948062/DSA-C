#include<stdio.h>
int main()
{
    int balance=1000;
    int withdraw;
    int choice,dep;
    while(1)
    {
        printf("Please Enter your Option:\n");
        printf("1.Withdraw\n");
        printf("2.Deposite\n");
        printf("3.Exit\n");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
            printf("Enter the amount to withdraw:\n");
            scanf("%d",&withdraw);
            if(withdraw<=balance)
            {
                printf("Sucess\n");
                balance-=withdraw;
            }
            else
            {
                printf("Invalid\n");
            }
            break;
            case 2:
            printf("Enter the amount to deposite:\n");
            scanf("%d",&dep);
            if(dep>0)
            {
                printf("Sucess\n");
                printf("Final Balance:%d\n",balance+=dep);
            }
            else
            {
                printf("Failure");
            }
            break;
            case 3: exit(0);
            break;
            default:printf("Invalid choice\n");
            break;
        }
    }
    return 0;
}