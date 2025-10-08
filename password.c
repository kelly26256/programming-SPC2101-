/*
NAME:Kelly Mwiti Muriuki 
REG. NO:CT100/G/26256/25
DESCRIPTION:checking password
*/

#include <stdio.h>
#include <string.h>

int main(){
	char password[20];//array to store password
	
	do {
		printf("Enter the password:\t");//prompt user to enter password
		scanf("%s", &password);
		
		if(strcmp(password, "1234") != 0){
			printf("Incorect password. please try again later.\n");
		}
		else{
			printf("Access Granted\n");
			break;
		}
	}
	while(strcmp(password, "1234") !=0);
	
	
	return 0;

}
