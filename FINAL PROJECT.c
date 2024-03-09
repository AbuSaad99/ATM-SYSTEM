#include <stdio.h>
#include <stdlib.h>


void transaction(){
  float balance = 1000;  
  int anotherTransaction; 	
  int amountToWidthdraw;	
  int choice; 
  int amountToDeposit;

	printf("\n*************\"Welcome to MA Bank ATM Service\"**************\n");

    printf("1-> Withdraw Cash\n"); 

    printf("2-> Deposit Cash\n");

    printf("3-> Check Balance\n");

    printf("4-> Quit\n");

    printf("********************************************\n\n");

    printf("Enter your choice: ");

    scanf("%d", & choice);

//====================================================================================================
  
  switch(choice){
    
	case 1:									//withdraw
     
    printf("\nPlease enter amount to withdraw: "); 
   
    scanf("%d", &amountToWidthdraw); 
   
    if(amountToWidthdraw > balance){
     
	  printf("\nThere is no insuffient funds in your account\n"); 
     
      printf("\n\nDo you want another transaction?\n\nPress 1 to proceed and 2 to exit\n\n"); 
     
	  scanf("%d", &anotherTransaction); 
     
	  if(anotherTransaction == 1){
     
	    transaction();
     
	  }
    
	} 
	
	else 
	
	{
         
      balance = balance - amountToWidthdraw; 
      
      printf("\nYou have withdrawn %d and your new balance is %f ", amountToWidthdraw, balance);
      
      
	  printf("\n\nDo you want another transaction?\n\nPress 1 to proceed and 2 to exit\n\n"); 
      
	  scanf("%d", &anotherTransaction); 
      
	  if(anotherTransaction == 1){
      	      
		transaction();
     
	  }
	  if(anotherTransaction != 1){
	  	
	  		printf("\n****************\"THANK YOU TO USING MAH BANK SERVICES\"****************");
	  
	  }
      
      
    }

//====================================================================================================
    
    break; 
    
    case 2:					    // DEPOSIT
    
    
     
    printf("\nPlease enter amount to deposit: "); 
    
	scanf("%d", &amountToDeposit); 
    
    
    balance = amountToDeposit + balance; 
    
    printf("\nThank you for depositing, new balance is: %f\n", balance); 
    
          printf("\n\nDo you want another transaction?\n\nPress 1 to proceed and 2 to exit\n\n"); 
    
	  scanf("%d", &anotherTransaction); 
    
	  if(anotherTransaction == 1){
    
        transaction();
    
	  }
	  if(anotherTransaction != 1){
	  	
	  		printf("\n****************\"THANK YOU TO USING MAH BANK SERVICES\"****************");
	  
	  }
    
    break; 
    
//====================================================================================================    
    
    case 3:						// BALANCE
        
    printf("\nYour bank balance is: %f\n", balance); 
    
          printf("\n\nDo you want another transaction?\n\nPress 1 to proceed and 2 to exit\n\n"); 
     
	  scanf("%d", &anotherTransaction); 
     
	  if(anotherTransaction == 1){
    
        transaction();
    
	  }
	  if(anotherTransaction != 1){
	  	
	  		printf("\n****************\"THANK YOU TO USING MAH BANK SERVICES\"****************");
	  
	  }
	  
	 break;
	 
//====================================================================================================    
    
    case 4:
    
		printf("\n****************\"THANK YOU TO USING MAH BANK SERVICES\"****************");
    
  }
  
  
}



int main(){
  
  transaction();
  
  return 0;
}
