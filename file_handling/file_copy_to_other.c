#include <stdio.h> 
#include <stdlib.h> // For exit() 

int main() 
{ 
	FILE *fptr1, *fptr2; 
	// Open file1
	fptr1 = fopen("file1.txt", "r"); 
	if (fptr1 == NULL) 
	{ 
		printf("Cannot open file %s \n", filename); 
		exit(0); 
	} 
	// Open file2
	fptr2 = fopen("file2.txt", "w"); 

	
	// Read data from file1 and copy to file2
	char token = fgetc(fptr1); 
	while (token != EOF) 
	{ 
		fputc(token, fptr2); 
		token = fgetc(fptr1); 
	} 

	printf("\nContents copied from file1 to file2: \n %s", filename); 

	fclose(fptr1); 
	fclose(fptr2); 
	return 0; 
}
