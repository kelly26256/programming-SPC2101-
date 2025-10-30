/*
NAME:KELLY MWITI MURIUKI
REG NO:CT100/G/26256/25
DESCRIPTION:2D array for room occupancy
*/
#include<stdio.h>
#include<stdlib.h>

int main(){
//array declaration
int occupancy[5][10],j, i, occupancy_per_floor, vacant_rooms_per_floor;
	
	for(i=0; i<5; i++){
		for(j=0; j<10; j++){
			occupancy[i][j] = rand() %2;
			if(occupancy[i][j] == 1){
				occupancy_per_floor: i++;
			}
			else{
				vacant_rooms_per_floor: i++;
			}
			break;
		}
	}
	for(i=0; i<5; i++){
		printf("\nfloor %d: occupied = %d: vacant =%d");
	}
	return 0;
}
