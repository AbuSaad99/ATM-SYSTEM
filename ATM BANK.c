#include <stdio.h>
#include <stdlib.h>

float balance = 0;                        // intial balance to be zero for everyone 
int anotherTransaction; 
int amountToWidthdraw; 
int amountToDeposit;
int pin = 1520 , pincode;

void transaction(){
	
//	printf("ENTER YOUR PIN CODE = ");
//	scanf("%d",pincode);
//	
//	if(pin != 1520){
//		
//		printf("INVALID CODE");
//	
//	}
	
	
	
	  int choice; 
  	printf("Enter any option to be served!\n\n");
  	printf("1. Withdraw\n"); 
  	printf("2. Deposit\n"); 
  	printf("3. Balance\n");
  	scanf("%d",  &choice); 
  
  	switch(choice){
   
	case 1:			                                      	//withdraw
        
    printf("Please enter amount to withdraw: "); 
    
    scanf("%d", &amountToWidthdraw); 
    
	if(amountToWidthdraw > balance){
    
	  printf("There is no insuffient funds in your account"); 
    
	  printf("\n\nDo you want another transaction?\nPress 1 to proceed and 2 to exit\n\n"); 
    
	  scanf("%d", &anotherTransaction); 
    
	  if(anotherTransaction == 1){
    
	    transaction();
    
	  }
    
	} 
	else {
    

       
      balance = balance - amountToWidthdraw; 
      
      printf("You have withdrawn %d and your new balance is %f ", amountToWidthdraw, balance);
      
   
      
	  printf("\n\nDo you want another transaction?\nPress 1 to proceed and 2 to exit\n\n"); 
      
	  scanf("%d", &anotherTransaction); 
      
	  if(anotherTransaction == 1){
      
	  
      
	    transaction();
      
	  }
      
      
    }
    break; 
    
    case 2:				                                   // DEPOSIT
 
	printf("Please enter amount to deposit: "); 
    
	scanf("%d", &amountToDeposit); 
  
    balance = amountToDeposit + balance; 
    
    printf("Thank you for depositing,\n new balance is: %f", balance); 
      
  
      printf("\n\nDo you want another transaction?\nPress 1 to proceed and 2 to exit\n\n");  			
    
	  scanf("%d", &anotherTransaction); 
    
	  if(anotherTransaction == 1){
    
	    transaction();				 
    
	  }
    
    break; 
    
    case 3:														   //  BALANCE
  
    	printf("Your bank balance is: %f", balance);           

      	printf("\n\nDo you want another transaction?\nPress 1 to proceed and 2 to exit\n\n");   	         	
		  scanf("%d", &anotherTransaction); 
     	
		  if(anotherTransaction == 1){
      
        transaction();				
      }
    
    break;
  

  
}



int main(){
  
  transaction();
  
  return 0;  
}
