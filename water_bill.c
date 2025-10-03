/*
NAME:Kelly mwiti muriuki
REG:CT100/G/26256/25
DESCRIPTION:c program to compute water bill
*/

#include <stdio.h>

int main(){
	
	//variable declaration
	int water_units;
	float water_bill;
	
	//prompt the user to enter water units
	printf("Enter number of water units consumed:\t");
	scanf("%d", &water_units);
	
	if (water_units<=30){
		water_bill=20 * water_units;
	}
	else if(water_units>=31 && water_units<=60){
		water_bill=25 * water_units;
	}
	else if(water_units>60){
		water_bill=30 * water_units;
	}
	
	printf("The total bill is %.2f KES", water_bill);
	
	return 0;
}
