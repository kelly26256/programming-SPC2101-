/*NAME: KELLY MWITI MURIUKI
REG NO: CT100/G/26256/25
DESCRIPTION:a c program that allows librarian to enter title and store
*/

#include <stdio.h>
int main()
{
FILE *file;
char title[100];

//open borrowed_books.txt file
file = fopen("borrowed_books.txt", "a");

//checking errors
if(file == NULL){
	printf("Error opening file.\n");
	return 1;
}	

//prompt user to enter title
printf("Enter the book title borrowed\t:");
fgets(title, sizeof(title), stdin);

fprintf(file, "%s", title);

printf("Book title successfully stored!\n");
//close borrowed_books.txt file
fclose(file);
	return 0;
}