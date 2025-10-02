/*
NAME:Kelly Mwiti Muriuki
REG. NO:CT100/G/26256/25
DESCRIPTION:Internet data bundle selection
*/
#include <stdio.h>

int main(){
	//variable declaration
	int choice;
	
	//output bundle choice
	printf("Select your data bundle:\n");
	printf("1. 100MB @ 50 KES\n");
	printf("2. 500MB @ 200 KES\n");
	printf("3. 1GB @ 350 KES\n");
	printf("4. 2GB @ 600\N");
	
	//prompt user to enter their choice
	printf("\n Enter your choice:\t");
	scanf("%d", &choice);
	
	switch(choice)
	{
	case 1:
		printf("You selected 100MB. cost = 50 KES\n");
		break;
	case 2:
		printf("You selected 500MB. cost = 200 KES\n");
		break;
	case 3:
		printf("You selected 1GB. cost = 350 KES\n");
		break;
	case 4:
		printf("You selected 2GB. cost = 600 KES\n");
		break;
	default:
		printf("Invalid choice.\n");
		break;
	}
	
	return 0;
}