#include <stdio.h>
int main(){
	
	int amount, balance=10000;
	
	while(balance>0){
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