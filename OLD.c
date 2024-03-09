#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {

int  amount = 1000, deposit, withdraw;
int choice, pin, k;
int  transaction = 1;

//=========================================================


  while (pin != 1520)
  {

    printf("ENTER YOUR SECRET PIN NUMBER :");

    scanf("%d", & pin);

    if (pin != 1520)

      printf("PLEASE ENTER VALID PASSWORD! \n");
  }


//=============================================================================

  
  do
  {

    printf("\n********Welcome to XYZ Bank ATM Service***********\n");

    printf("1. Check Balance\n");

    printf("2. Withdraw Cash\n");

    printf("3. Deposit Cash\n");

    printf("4. Quit\n");

    printf("********************************************\n\n");

    printf("Enter your choice: ");

    scanf("%d", & choice);


//=========================================================================================


    switch (choice)
    {

    case 1:                    // Check Balance

      printf("\n YOUR BALANCE IS : %d RUPEES ", amount);

      break;

    case 2:                   // Withdraw Cash

      printf("\n ENTER THE AMOUNT TO WITHDRAW : ");

      scanf("%d", & withdraw);
      

      if (withdraw % 100 != 0)
      {
        printf("\n PLEASE ENTER THE AMOUNT IN MULTIPLES OF 100");
      } 
	  
	  
	  else if (withdraw < 500  &&  withdraw > 500)
      {

        printf("\n INSUFFICENT BALANCE");
      } 
	  
	  
	  else
      {

        amount = amount - withdraw;

        printf("\n\n PLEASE COLLECT CASH : %d",withdraw);

        printf("\n YOUR CURRENT BALANCE IS : %d", amount);
      }


      break;

    case 3:               // Deposit Cash.

      printf("\n ENTER THE AMOUNT TO DEPOSIT");

      scanf("%d", & deposit);

      amount = amount + deposit;

      printf("YOUR BALANCE IS %d", amount);

      break;

    case 4:                 // QUIT .

      printf("\n THANK YOU FOR USING XYZ Bank ATM");

      break;

    default:

      printf("\n INVALID CHOICE");
    }

    printf("\n\n\n DO U WISH TO HAVE ANOTHER TRANSCATION?(y/n): \n");

    scanf("%c", & transaction);

    if (transaction == 2)

      k = 1;

  } while (k==2);

  printf("\n\n THANKS FOR USING MY Bank ATM SERVICE");


	return 0;
}
