/*
NAME:KELLY MWITI MURIUKI
REG NO:CT100/G/26256/25
DESCRIPTION:1D array
*/
#include<stdio.h>

int main(){
	//array declaration
	float revenue[7], total=0, average;
	int i;
	
	printf("Enter revenue");
	for(i=0; i<7; i++){
		printf("\nDay%d\t:", i+1);
		scanf("%f", &revenue[i]);
		total=total +=revenue[i];
	}
	average=total/7;
	printf("total is KES %.2f", total);
	printf("average is KES %.2f", average);
return 0;
}