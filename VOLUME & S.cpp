/*
NAME:Kelly mwiti muriuki
REG NO: CT100/G/26256/25
Description:To compute volume and surface area
v = pi * radius^2 *height
S.A = (2pi * radius^2) + (2pi * radius * height)
*/

#include <stdio.h>
//maon function
int main(){
	//variable declaration
	float pi, radius, height, volume, surface_area;
	
	//prompt user to enter pi
	printf("Enter pi:");
	scanf("%f", &pi);
	
	//prompt user to enter radius
	printf("\n Enter radius:");
	scanf("%f", &radius);
	
	//prompt user to enter height
	printf("\n Enter height:");
	scanf("%f", &height);
	
	//compute volume
	volume = pi * radius * radius * height;
	
	//display volume
	printf("\n volome is %.2f", volume);
	
	//compute surface area 
	surface_area = (2 * pi *radius * radius) +( 2 * pi * radius * height);
	
	//display surface area
	printf("\n Surfa_cearea is %.2f", surface_area);
	
	return 0;
}