#include "fun.h"
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include "user.c"
#include "display.c"

struct user_details user[300];

int main()

{
    int num,n, count=0 , i, userid, amt;
    bool loop = true;
    while (loop)
    {
        b:printf("Welcome to Bank application \n");
        printf("\nBanking System Menu :\n");
        printf("1- Admin \n");
        printf("2- User \n");
        printf("0- Exit \n\n");
        printf("Enter main choice \n");
        scanf("%d", &num);
        printf("\n\n");

        switch (num)
        {
        case 1:

            printf("1- Display all records \n\n");
            for(i=0;i<count;i++)
            {
                displayUsers(user[i].id, user[i].name, user[i].amount, user[i].acccounttype);
            }
            break;
        a:case 2:
            printf("Welcome User \n");
            printf("1- Create Account \n");
            printf("2- Deposit Amount \n");
            printf("3- Withdraw Amount \n");
            printf("0- Main Menu \n");

            printf("\n*************************************\n");

            printf("Select operation \n");
            scanf("%d", &n);

            switch (n)
            {
            case 0:
                goto b;
            case 1:
                user[count].id=count+1;
                printf("Enter  name : ");
                scanf("%s",user[count].name);
                printf("Enter Amount : ");
                scanf("%d",&user[count].amount);
                printf("Type SA for Savings Account \t CA for Current Account \t FD for Fixed deposit Account\n");
                printf("Enter account type :");
                scanf("%s",user[count].acccounttype);
                printf("\n*************************************\n");
	            printf("User Created");
                
                displayUsers(user[count].id, user[count].name, user[count].amount, user[count].acccounttype);
            
                count++;  
                
                goto a;
                break;  
            case 2:
                
                printf("Enter Account id :");
                scanf("%d",&userid);
                printf("\n*************************************\n");
                printf("Account details: \n");

                displayUsers(user[userid-1].id, user[userid-1].name, user[userid-1].amount, user[userid-1].acccounttype);

                printf("Enter amount to deposit : ");
                scanf("%d",&amt);
                user[userid-1].amount=user[userid-1].amount + amt;

                printf("\nSuccessfully deposited! \n ");
                printf("User new balance is %d \n", user[userid-1].amount);

                printf("\n*************************************\n");

                goto a;
                break;

            case 3: 
                printf("Enter id for withdraw : ");
                scanf("%d",&userid);
    
                displayUsers(user[userid-1].id, user[userid-1].name, user[userid-1].amount, user[userid-1].acccounttype);
                
                printf("\nEnter amount to withdraw : ");
                scanf("%d",&amt);
                user[userid-1].amount=user[userid-1].amount - amt;

                printf("Successfully withdrawed !");
                printf("User new balance is %d \n", user[userid-1].amount);

            default:
                break;
            }
            break;
        case 0:

            loop = false;
            break;
        default:
            printf("Choice is invalid \n");
            break;
        }
    }

    return 0;
}