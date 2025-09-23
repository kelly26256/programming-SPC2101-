//simple c program
/*
NAME:Kelly mwiti muriuki
REG NO:CT100/G/26256/25
Description:Hello c.
*/

#include <stdio.h>

//main function
int main(){
	//prompt the user to enter height
	int height;
	printf("\n Enter your height:");
	scanf("%d", &height);
	
	//prompt the user to enter weight
	int weight;
    printf("\n Enter your weight:");
    scanf("%d", &weight);
    
    //prompt the user to enter phone number
    int phone_number;
    printf("\n Enter your phone number:");
	scanf("%d", & phone_number);
	
	//display on the user's screen
	printf("Your height is %d\n", height);
	printf("Your weight is %d\n", weight);
	printf("Your phone number is %d\n", phone_number);
	return 0;
}