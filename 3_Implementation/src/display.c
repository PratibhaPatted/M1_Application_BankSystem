#include "fun.h"

void displayUsers(int id, char name[50], int amount, char acccounttype[5])

{
	printf("\n*************************************\n");
	printf("Account Details");
	printf("\n*************************************\n");
	printf("Userid \t\t : %d", id);
    printf("\nUsername \t : %s", name);
    printf("\nBalance \t : %d", amount);
	printf("\nAccount Type \t : %s", acccounttype);
	printf("\n*************************************\n");
}
    
