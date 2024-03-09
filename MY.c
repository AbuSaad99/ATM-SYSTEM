#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int printchoice(int choice){          // 1
	printf("\n********Welcome to XYZ Bank ATM Service***********\n");

    printf("1-> Check Balance\n");

    printf("2-> Withdraw Cash\n");

    printf("3-> Deposit Cash\n");

    printf("4-> Quit\n");

    printf("********************************************\n\n");

    printf("Enter your choice: ");

    scanf("%d", & choice);
    
}

//========================================================================

int CheckBalance(int choice){  //2

					int cash;
						
					printf("\nYour balance in your account is %2f\n",cash);
					
					printf("\nDo you want to countinue so press 5 else any other number :");
					
					scanf("%d",&choice);
					
					if(choice == 5){
							    printf("\n********Welcome to XYZ Bank ATM Service***********\n");

    							printf("1-> Check Balance\n");

    							printf("2-> Withdraw Cash\n");

    							printf("3-> Deposit Cash\n");

    							printf("4-> Quit\n");

    							printf("********************************************\n\n");

    							printf("Enter your choice: ");

    							scanf("%d", & choice);
								}
							else{
								printf("\n\nTHANK YOU!");
							}
	
}

//==============================================================================

int WithdrawCash(int choice){               //3
	
					int withdraw,cash;
					
					printf("\nEnter the amount to withdraw =");
				scanf("%d",&withdraw);
				if(withdraw%100==0){
					if(cash>=withdraw){
						cash=withdraw;
						printf("\nAmount after your withdarw is %d\n",cash);
					}
					else{
						printf("\nInvalid amount");
						}
				}
				else{
					printf("\nPlease enter amount in 100's'");
				}
				    printf("\nDo you want to countinue so press 5 else any other number :");	
				    
					scanf("%d",&choice);
				
				if(choice == 5){
					    printf("\n********Welcome to XYZ Bank ATM Service***********\n");

   						printf("1-> Check Balance\n");

    					printf("2-> Withdraw Cash\n");

    					printf("3-> Deposit Cash\n");

    					printf("4-> Quit\n");

   						printf("********************************************\n\n");

    					printf("Enter your choice : ");

    					scanf("%d", & choice);
						} 
				else{
						printf("THANK YOU!");
				}


	
}

//==============================================================

int  DepositCash(int choice){ 				//4

					int deposite, cash;
					
					printf("\nEnter the amount of deposite =");
					scanf("%d",&deposite);
					if(deposite%100==0){
						cash+=deposite;
						printf("After deposite your amount become %d",deposite);
						
					}
					else{
						printf("\nPlease enter amount in 100's'");
					}
				    printf("\nDo you want to countinue so press 4 else any other number =");	
				    
					scanf("%d",&choice);
					
						if(choice == 5){
					    printf("\n********Welcome to XYZ Bank ATM Service***********\n");

    					printf("1-> Check Balance\n");

    					printf("2-> Withdraw Cash\n");

    					printf("3-> Deposit Cash\n");

    					printf("4-> Quit\n");

    					printf("********************************************\n\n");

    					printf("Enter your choice: ");

    					scanf("%d", & choice);
						}
						else{
							printf("THANK YOU!");
						}	
	

}

int printexit(){										//5
			printf("THANK YOU! ");
}

int repeart(int choice){
	    			printf("\n********Welcome to XYZ Bank ATM Service***********\n");

    				printf("1-> Check Balance\n");

    				printf("2-> Withdraw Cash\n");

    				printf("3-> Deposit Cash\n");

    				printf("4-> Quit\n");

    				printf("********************************************\n\n");

    				printf("Enter your choice: ");

    				scanf("%d", & choice);
}

int main(int argc, char *argv[]) {
	
	int i, 	choice, withdraw, deposite;
	float cash = 0;


		printchoice(choice);


		switch(choice){
			case 1:    
			
				CheckBalance(choice);                        //  Check Balance

			break;
				
				
//========================================================================
				
				
			case 2:
					
				WithdrawCash(choice);
				
			break;
				
				
//========================================================================
				
				
			case 3:
				
				DepositCash(choice);

			break;
				
				
				//========================================================================
				
			case 4:
									
			   printexit();
			
			break;
				
			case 5:
				
				repeart(choice);	
						
    		break;
								
				//========================================================================
				
			default:
					
				printf("\nYour chice is invaild!\n");
					
			break;
	
		}
	
	return 0;
}
