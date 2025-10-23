/*
NAME: Kelly Mwiti Muriuki
REG NO:CT100/G/26256/25
DESCRIPTION: c programm to calculate electric bill
*/

#include<stdio.h>

//function prototype
int calculateElectricBill(int unit);

int main()
{
	int unit;
	
	//prompt user to enter number 
	//of unit consumed
	printf("Enter number of units consumed\t:");
	scanf("%d", &unit);
	
	//function call
	float bill = calculateElectricBill(unit);
	
	printf("The total bill=Ksh.%.2f", bill);
	return 0;
}

//function declaration
int calculateElectricBill(int unit){
	float bill;
	if (unit<=100){
		bill=unit * 10;
	}
	else if(unit<=200){
		bill=100 * 10 + (unit - 100)* 15;
	}
	else{
		bill=100 * 10 + 100 * 15 +(unit - 200)*20;
	}
	return bill;
}

