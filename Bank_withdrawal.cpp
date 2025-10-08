/*
NAME:Kelly Mwiti Muriuki
REG. NO:CT100/G/ 26256/25
DESCRIPTION:
*/

#include <stdio.h>
int main(){
	
	int amount, balance=10000;
	
	while(balance>0){
		//prompt user to enter amount to withdraw
		printf("Enter amount to withdraw:\t");
		scanf("%d", &amount);
		
		balance = balance - amount;
		
		printf("New balance is %d\n", balance);
	}
	if(balance<=0){
		printf("insufficient balance");
	}
	return 0;

}
