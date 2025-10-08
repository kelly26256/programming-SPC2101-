#include <stdio.h>

int main(){
	int secret=5, guess, attempts=0;
	
	printf("The lucky number is between 1 and 10.\n");
	do{
	printf("Enter the lucky number to win:\t");
	scanf("%d", &guess);
	++attempts;
	
	if(guess > secret){
		printf("Too high!\n");
	}
	else if(guess < secret){
		printf("Too low!\n");
	}
	else{
		printf("Congratulations! you've guessed it right!");
	}
	}
	while(guess != secret);
	
	printf("It took you %d attempts to guess correctly", attempts);
	return 0;
}