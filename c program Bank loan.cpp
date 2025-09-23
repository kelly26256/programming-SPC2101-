/*
NAME:Kelly mwiti muriuki
Registration NO:CT100/G/26256/25
Description:c program for loan application
*/

#include <stdio.h>

int main(){
	//variable declaration
	int age;
	float salary;
	//prompt the user to enter age
	printf("\n Enter your age:");
	scanf("%d", &age);
	
	//prompt the user to enter salary
	printf("\n Enter your salary:");
	scanf("%f", &salary);
	
	//display to the user screen
	   if(age > 22 && salary > 2100)
		   {
	   		printf("Congratulation you qualify for the loan");
		   }
		   else
		   {
		   	printf("Ufortunetly, we are unable to offer you a loan right now");
		   }
	return 0;
}