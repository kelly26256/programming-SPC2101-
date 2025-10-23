/*
NAME: Kelly Mwiti Muriuki
REG NO:CT100/G/26256/25
DESCRIPTION:c programm to calculate total bus fare
*/

#include <stdio.h>

//function prototype
int calculateFare(float distance);

int main(){
	float distance; //variable declaration
	
	//prompt user to enter the distance
	printf("Enter distance covered\t:");
	scanf("%f", &distance);
	
	//function call
	float bus_fare = calculateFare(distance);
	
	printf("The total fare is Ksh%.2f", bus_fare);
	return 0;
}

//function declaration
int calculateFare(float distance){
	float bus_fare, rate = 50.00;
	
	bus_fare = rate * distance;
	return bus_fare;
	
}

