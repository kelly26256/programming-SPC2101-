/*NAME: KELLY MWITI MURIUKI
REG NO: CT100/G/26256/25
DESCRIPTION:calculate total sales
*/

#include<stdio.h>

int main(){
	FILE *file;
	
	//open file in readng mode
		file = fopen("sales.txt", "r");
		
		if(file == NULL){
			printf("Error opening file.\n");
			return 1;
		}
		
		float amount, total = 0.00;
		
		while(fscanf(file, "%.2f", &amount)==1){
			total += amount;
		}
		
		//display the total sales
		printf("Total sales for the day\t:%.2f\n", total);
		
		//cole the file
		fclose(file);
	return 0;
}