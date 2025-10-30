/*
NAME:KELLY MWITI MURIUKI
REG NO:CT100/G/26256/25
DESCRIPTION:a 3D array to represent hotel branches
*/
#include<stdio.h>
#include<stdlib.h>

int main(){
	//variable declaration 
	int i, j, k;
	//array declaration
	int chain[3][5][10], total_occupied_rooms =0;
	
	for(i=0; i<3; i++){
		for(j=0; j<5; j++){
			for(k=0; k<10; k++){
				chain[i][j][k] = rand() %2;
				if(chain[i][j][k]==1){
					total_occupied_rooms++;
				}
			}
		}
	}
	printf("Total occupied rooms in all branches is %d\n",total_occupied_rooms);
	return 0;
}