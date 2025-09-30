/*
NAME:Kelly mwiti muriuki
REG:CT100/G/26256/25
DESCRIPTION:
*/

#include <stdio.h>
int main(){
	
	//variable declaration
	int attendance, average_marks;
	
	//prompt user to enter attendance
	printf("Enter attendance:\t");
	scanf("%d", &attendance);
	
	//prompt user to enter average marks
	printf("Enter average marks:\t");
	scanf("%d", &average_marks);
	
	if(attendance>=75 && average_marks>=40)
	{
		printf("Eligible for the final exam.");
	}
	else
	{
		printf("You are not eligible for the final exam.");
	}
	return 0;
}