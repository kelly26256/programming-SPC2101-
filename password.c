#include <stdio.h>
#include <string.h>

int main(){
	char password[20];
	
	do {
		printf("Enter the password:\t");
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