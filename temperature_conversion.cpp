/*
NAME: Kelly Mwiti Muriuki
REG NO:CT100/G/26256/25
DESCRIPTION:c programm to convert temperature from fahrenheit to degrees
*/

#include<stdio.h>

//function prototype
int convertToCelsius(float f);

int main(){
	float f;//variable declaration
	
	//prompt user to enter temperature
	//in fahrenheit
	printf("Enter temperature in fahrenheit\t:");
	scanf("%f", &f);
	
	//function call
	float degrees = convertToCelsius(f);
	printf("Temperature in  is %.2f degrees celsius\n", degrees);
}

//function declaration
int convertToCelsius(float f){
	float c;
	c =(f - 32)*5/9;
	return c;
}
