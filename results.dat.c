/*NAME: KELLY MWITI MURIUKI
REG NO: CT100/G/26256/25
DESCRIPTION:university exam results
*/

#include<stdio.h>
#include <stdlib.h>

//define structure
struct students{
	char name[50];
	int regNo;
	float marks;
}student1;

int main()
{
	FILE *file;
	struct students student1;
	//open file results.dat in reading mode
	file = fopen("results.dat", "rb");
	
	//record the details until EOF 
	if(file == NULL){
		printf("Error opening file.\n");
		return 1;
	}
	
	printf("Students records:");
	//display the name marks and reg no.
	while(fread(&student1, sizeof(struct students), 1, file) == 1){
		printf("Name: %s\n", student1.name);
		printf("Reg No: %d\n", student1.regNo);
		printf("Marks: %.2f\n", student1.marks);
	}
	//close the file
	fclose(file);
	return 0;
}